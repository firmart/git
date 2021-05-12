#ifndef PROMPT_H
#define PROMPT_H

#define PROMPT_ASKPASS (1<<0)
#define PROMPT_ECHO    (1<<1)

/*
 * This function should not be used for regular prompts (i.e., asking user for
 * confirmation or picking an option from an interactive menu) as it only
 * accepts input from /dev/tty, thus making it impossible to test with the
 * current test suite.  Please instead use git_read_line_interactively for that
 * purpose.  See 97387c8bdd (am: read interactive input from stdin, 2019-05-20)
 * for historical context.
 *
 */

char *git_prompt(const char *prompt, int flags);

int git_read_line_interactively(struct strbuf *line);

#endif /* PROMPT_H */
