/*
 * FUN_1000e1b9 at 1000e1b9
 * undefined4 * __thiscall FUN_1000e1b9(void * this, int param_1, undefined4 param_2, undefined4 param_3, undefined4 * param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, byte param_8, byte param_9, undefined1 param_10, undefined4 param_11, undefined4 param_12, byte param_13)
 * Address ranges: 1000e1b9-1000e2b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_1000e1b9(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,byte param_8,byte param_9,
            undefined1 param_10,undefined4 param_11,undefined4 param_12,byte param_13)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *local_8;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  iVar1 = *(int *)(param_1 + 0xacc);
  *(undefined ***)this = &PTR_LAB_100b1da4;
  local_8 = (undefined4 *)FUN_100ad475(0xc0);
  if (local_8 == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    FUN_10025f07(local_8 + 0x13,param_11,param_12,param_5,param_6);
    FUN_1002548b(local_8,-(uint)(iVar1 != 0) & iVar1 + 4U,param_10);
    *local_8 = &PTR_FUN_100b1dbc;
    local_8[0x2c] = 0;
    local_8[0x2d] = 0;
    local_8[0x2e] = 0;
    local_8[0x2f] = 0;
  }
  *(int *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 **)((int)this + 4) = local_8;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined ***)this = &PTR_LAB_100b1798;
  puVar2 = (undefined4 *)((int)this + 0x28);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)((int)this + 0x48) = param_5;
  *(undefined4 *)((int)this + 0x4c) = param_6;
  *(undefined4 *)((int)this + 0x50) = param_7;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  if (local_8 != (undefined4 *)0x0) {
    local_8[0x2e] = (uint)param_8 << 10 | (uint)param_13 | (uint)param_9 << 9;
  }
  return this;
}

