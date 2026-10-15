/*
 * FUN_1002a110 at 1002a110
 * undefined __thiscall FUN_1002a110(void * this, ulonglong * param_1)
 * Address ranges: 1002a110-1002a148
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1002a110(void *this,ulonglong *param_1)

{
  undefined4 uVar1;
  
  *param_1 = (ulonglong)
             CONCAT24((short)((uint)*(undefined4 *)((int)this + 0x148) >> 0x10),
                      *(undefined4 *)((int)this + 0x148)) & 0xffffffff0000ffff;
  uVar1 = *(undefined4 *)((int)this + 0x14c);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(ulonglong *)((int)param_1 + 0x14) =
       (ulonglong)CONCAT24((short)((uint)uVar1 >> 0x10),uVar1) & 0xffffffff0000ffff;
  return;
}

