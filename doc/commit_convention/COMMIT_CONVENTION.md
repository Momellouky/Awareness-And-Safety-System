A common commit convention that you could follow for this project is the Conventional Commits format. This format has the following structure for each commit message:


--------------------------------------------------

`<type>`[optional scope]: `<description>`

[optional body]

[optional footer(s)]

--------------------------------------------------

`<type>`: This is a mandatory field that describes the type of change you're making. The allowed values are:

- feat: A new feature or functionality is being added.
- fix: A bug or issue is being fixed.
- docs: Documentation is being updated or added.
- style: Changes that do not affect the meaning of the code (white-space, formatting, missing semi-colons, etc).
- refactor: Changes that neither fixes a bug nor adds a feature (renaming a variable, extracting a method, moving a function).
- test: Adding missing tests or correcting existing tests.
- chore: Changes to the build process or auxiliary tools and libraries such as documentation generation.

[optional scope]: This field is optional and allows you to specify the area of the codebase that your changes affect. For example, if you're working on the input module, you could use [input] as the scope.

`<description>`: This is a brief description of the changes you're making. It should be written in the present tense and start with a verb. For example: Add support for speed limit configuration.

[optional body]: This is an optional field that allows you to provide a more detailed description of the changes you're making.

[optional footer(s)]: This is an optional field that allows you to reference issues, provide breaking change information, or add other metadata.

Here's an example commit message using this convention:

--------------------------------------------------

**feat[input]: Add support for speed sensor input**

--------------------------------------------------

By using this format consistently, it will make it easier for you and other contributors to understand the purpose and impact of each commit in your project's history.