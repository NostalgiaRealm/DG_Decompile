/*
 * FUN_1005f398 at 1005f398
 * undefined FUN_1005f398(void)
 * Address ranges: 1005f398-1005f46f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005f398(int param_1)

{
  *(undefined1 *)(param_1 + 0x5957) = 0;
  if ((((((*(uint *)(param_1 + 0x5210) & 0x30000) != 0) ||
        ((*(uint *)(param_1 + 0x5218) & 0xff) != 0)) ||
       ((*(uint *)(param_1 + 0x5220) & 0x30000) != 0)) ||
      ((((*(uint *)(param_1 + 0x5228) & 0xff) != 0 || ((*(uint *)(param_1 + 0x5230) & 0x30000) != 0)
        ) || (((*(uint *)(param_1 + 0x5238) & 0xff) != 0 ||
              (((*(uint *)(param_1 + 0x5240) & 0x30000) != 0 ||
               ((*(uint *)(param_1 + 0x5248) & 0xff) != 0)))))))) ||
     (((*(uint *)(param_1 + 0x5250) & 0x30000) != 0 ||
      ((((((*(uint *)(param_1 + 0x5258) & 0xff) != 0 ||
          ((*(uint *)(param_1 + 0x5260) & 0x30000) != 0)) ||
         ((*(uint *)(param_1 + 0x5268) & 0xff) != 0)) ||
        (((*(uint *)(param_1 + 0x5270) & 0x30000) != 0 ||
         ((*(uint *)(param_1 + 0x5278) & 0xff) != 0)))) ||
       (((*(uint *)(param_1 + 0x5280) & 0x30000) != 0 || ((*(uint *)(param_1 + 0x5288) & 0xff) != 0)
        ))))))) {
    *(undefined1 *)(param_1 + 0x5957) = 1;
  }
  return;
}

