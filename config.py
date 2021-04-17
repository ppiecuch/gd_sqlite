# config.py
import SCons


def can_build(env, platform):
    return True


def configure(env):
    from SCons.Script import Variables, BoolVariable, Help, Exit

    opts = Variables()
    opts.Add(BoolVariable("builtin_sqlite", "Use the built-in SQLite library", True))
    opts.Update(env)
