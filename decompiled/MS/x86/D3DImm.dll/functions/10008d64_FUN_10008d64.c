/*
 * FUN_10008d64 at 10008d64
 * undefined1 __thiscall FUN_10008d64(void * this, char param_1)
 * Address ranges: 10008d64-10008dc2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_10008d64(void *this,char param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *extraout_EDX;
  undefined1 *extraout_EDX_00;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)((int)this + 0x22b);
  if (*(char *)((int)this + 0x229) != '\0') goto LAB_10008dba;
  iVar1 = *(int *)((int)this + 0x9cc);
  if (param_1 == '\0') {
    FUN_10009299((float *)(iVar1 + 0x280),(float *)(iVar1 + 0x900),(float *)(iVar1 + 0x8c0));
    puVar3 = extraout_EDX_00;
LAB_10008db0:
    *puVar3 = 1;
  }
  else {
    *puVar3 = 0;
    uVar2 = FUN_10009470((float *)(iVar1 + 0x280),(float *)(iVar1 + 0x900));
    puVar3 = extraout_EDX;
    if ((char)uVar2 != '\0') goto LAB_10008db0;
  }
  *(undefined1 *)((int)this + 0x229) = 1;
LAB_10008dba:
  return *puVar3;
}

