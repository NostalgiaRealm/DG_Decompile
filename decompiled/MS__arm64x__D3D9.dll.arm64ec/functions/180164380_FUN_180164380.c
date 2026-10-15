/*
 * FUN_180164380 at 180164380
 * undefined FUN_180164380(void)
 * Address ranges: 180164380-180164457
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180164380(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x7664) = 0;
  if ((((((*(uint *)(param_1 + 0x6ea0) & 0x70000) != 0) ||
        ((*(uint *)(param_1 + 0x6ea8) & 0xff) != 0)) ||
       ((*(uint *)(param_1 + 0x6eb0) & 0x70000) != 0)) ||
      ((((*(uint *)(param_1 + 0x6eb8) & 0xff) != 0 || ((*(uint *)(param_1 + 0x6ec0) & 0x70000) != 0)
        ) || (((*(uint *)(param_1 + 0x6ec8) & 0xff) != 0 ||
              (((*(uint *)(param_1 + 0x6ed0) & 0x70000) != 0 ||
               ((*(uint *)(param_1 + 0x6ed8) & 0xff) != 0)))))))) ||
     (((*(uint *)(param_1 + 0x6ee0) & 0x70000) != 0 ||
      ((((((*(uint *)(param_1 + 0x6ee8) & 0xff) != 0 ||
          ((*(uint *)(param_1 + 0x6ef0) & 0x70000) != 0)) ||
         ((*(uint *)(param_1 + 0x6ef8) & 0xff) != 0)) ||
        (((*(uint *)(param_1 + 0x6f00) & 0x70000) != 0 ||
         ((*(uint *)(param_1 + 0x6f08) & 0xff) != 0)))) ||
       (((*(uint *)(param_1 + 0x6f10) & 0x70000) != 0 || ((*(uint *)(param_1 + 0x6f18) & 0xff) != 0)
        ))))))) {
    *(undefined1 *)(param_1 + 0x7664) = 1;
  }
  return;
}

