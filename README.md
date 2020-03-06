# strace
This repo has simple situations that could help troubleshoot some errors on linux using strace.


## What is strace

"strace is a useful diagnostic, instructional, and debugging tool. System administrators, diagnosticians and trouble-shooters will find it invaluable for solving problems with programs for which the source is not readily available since they do not need to be recompiled in order to trace them" From [here](https://linux.die.net/man/1/strace)

## Common use cases

```bash
strace ./deadlock 
strace ./errors
strace python database.py
strace -p PID (Process Id)
```
## Example cases

* deadlock -> A simple deadlock situation that in depth it's possible to understand everything at kernel level
* database -> A database attempt to select when the connection was previously closed.
* errors -> Common signals that is returned from the syscall

On each file with the same name have detailed explanations about what happened.

This images contains the most important files on each example :)

### Deadlock

![deadlock](https://github.com/roberto-goncalves/strace/blob/master/images/deadlock.png "deadlock")

### Database

![database](https://github.com/roberto-goncalves/strace/blob/master/images/database.png "database")

### Errors

![errors](https://github.com/roberto-goncalves/strace/blob/master/images/errors.png "errors")
