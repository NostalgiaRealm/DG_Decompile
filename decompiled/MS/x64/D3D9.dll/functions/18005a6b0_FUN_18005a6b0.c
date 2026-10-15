/*
 * FUN_18005a6b0 at 18005a6b0
 * undefined __fastcall FUN_18005a6b0(longlong param_1)
 * Address ranges: 18005a6b0-18005a772
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005a6b0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x7664) = 0;
  if ((((((*(uint *)(param_1 + 0x6ea0) & 0x70000) != 0) || (*(char *)(param_1 + 0x6ea8) != '\0')) ||
       ((*(uint *)(param_1 + 0x6eb0) & 0x70000) != 0)) ||
      (((*(char *)(param_1 + 0x6eb8) != '\0' || ((*(uint *)(param_1 + 0x6ec0) & 0x70000) != 0)) ||
       ((*(char *)(param_1 + 0x6ec8) != '\0' ||
        (((*(uint *)(param_1 + 0x6ed0) & 0x70000) != 0 || (*(char *)(param_1 + 0x6ed8) != '\0'))))))
      )) || (((*(uint *)(param_1 + 0x6ee0) & 0x70000) != 0 ||
             (((((*(char *)(param_1 + 0x6ee8) != '\0' ||
                 ((*(uint *)(param_1 + 0x6ef0) & 0x70000) != 0)) ||
                (*(char *)(param_1 + 0x6ef8) != '\0')) ||
               (((*(uint *)(param_1 + 0x6f00) & 0x70000) != 0 ||
                (*(char *)(param_1 + 0x6f08) != '\0')))) ||
              (((*(uint *)(param_1 + 0x6f10) & 0x70000) != 0 ||
               (*(char *)(param_1 + 0x6f18) != '\0')))))))) {
    *(undefined1 *)(param_1 + 0x7664) = 1;
  }
  return;
}

