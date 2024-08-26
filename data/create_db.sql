START TRANSACTION;

CREATE SCHEMA IF NOT EXISTS contact;
SET SCHEMA 'contact';

-- Address
CREATE TABLE address(
    id           SERIAL PRIMARY KEY,
    home         INTEGER NOT NULL,
    street       VARCHAR(60) NOT NULL,
    neighborhood VARCHAR(30) NOT NULL,
    state        VARCHAR(3)  NOT NULL,
    country      VARCHAR(30) NOT NULL
);

-- ------------------------------------------------
INSERT INTO address (home, street, neighborhood, state, country) VALUES (231, 'Dr.Carlos Albert', 'Marring', 'MJ', 'Brásik');
INSERT INTO address (home, street, neighborhood, state, country) VALUES (431, 'Dr.Carlos Albert', 'Marring', 'MJ', 'Brásik');
INSERT INTO address (home, street, neighborhood, state, country) VALUES (551, 'Ana Costa', 'Casfa', 'SH', 'Brásik');

-- Contact
CREATE TABLE contact(
    id         SERIAL PRIMARY KEY,
    first_name VARCHAR(20),
    last_name  VARCHAR(60),
    telephone  VARCHAR(16) UNIQUE,
    email      VARCHAR(60) UNIQUE,
    address    INTEGER,

    FOREIGN KEY (address) REFERENCES address (id)
    ON DELETE CASCADE
    ON UPDATE CASCADE
);

-- ------------------------------------------------
INSERT INTO contact (first_name, last_name, telephone, email, address) VALUES ('Randolfo', 'A Goncalves', '(31) 99239-0399', 'rag@gmail.com', 1);
INSERT INTO contact (first_name, last_name, telephone, email, address) VALUES ('Pedro', 'Carlos', '(31) 99939-3377', 'pedro@gmail.com', 2);
INSERT INTO contact (first_name, last_name, telephone, email, address) VALUES ('Raul', 'Augusto', '(31) 99559-7393', 'raul@gmail.com', 1);

-- Notes
CREATE TABLE notes(
    id    SERIAL PRIMARY KEY,
    body  TEXT,
    tag   TEXT,
    owner INTEGER NOT NULL,

    FOREIGN KEY (owner) REFERENCES contact (id)
    ON DELETE CASCADE
    ON UPDATE CASCADE
);

-- ------------------------------------------------
INSERT INTO notes (body, tag, owner) VALUES ('...', '', 1);
INSERT INTO notes (body, tag, owner) VALUES ('1. pão', 'Compras', 1);
INSERT INTO notes (body, tag, owner) VALUES ('...', '', 3);

COMMIT;
