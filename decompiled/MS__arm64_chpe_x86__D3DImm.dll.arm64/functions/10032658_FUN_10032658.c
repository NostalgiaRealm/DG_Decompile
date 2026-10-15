/*
 * FUN_10032658 at 10032658
 * undefined FUN_10032658(void)
 * Address ranges: 10032658-1003276b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10032658(int param_1)

{
  *(undefined1 *)(param_1 + 0x1907) = 0;
  if ((((((*(uint *)(param_1 + 0xf20) & 0x30000) != 0) || ((*(uint *)(param_1 + 0xf28) & 0xff) != 0)
        ) || ((*(uint *)(param_1 + 0xf30) & 0x30000) != 0)) ||
      ((((*(uint *)(param_1 + 0xf38) & 0xff) != 0 || ((*(uint *)(param_1 + 0xf40) & 0x30000) != 0))
       || (((*(uint *)(param_1 + 0xf48) & 0xff) != 0 ||
           (((*(uint *)(param_1 + 0xf50) & 0x30000) != 0 ||
            ((*(uint *)(param_1 + 0xf58) & 0xff) != 0)))))))) ||
     (((*(uint *)(param_1 + 0xf60) & 0x30000) != 0 ||
      ((((((*(uint *)(param_1 + 0xf68) & 0xff) != 0 || ((*(uint *)(param_1 + 0xf70) & 0x30000) != 0)
          ) || ((*(uint *)(param_1 + 0xf78) & 0xff) != 0)) ||
        (((*(uint *)(param_1 + 0xf80) & 0x30000) != 0 || ((*(uint *)(param_1 + 0xf88) & 0xff) != 0))
        )) || (((*(uint *)(param_1 + 0xf90) & 0x30000) != 0 ||
               ((*(uint *)(param_1 + 0xf98) & 0xff) != 0)))))))) {
    *(undefined1 *)(param_1 + 0x1907) = 1;
  }
  return;
}

