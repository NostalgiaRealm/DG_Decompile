/*
 * FUN_10023ee0 at 10023ee0
 * undefined4 * __thiscall FUN_10023ee0(void * this, undefined4 param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 * param_6, int * param_7)
 * Address ranges: 10023ee0-10023f5d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall
FUN_10023ee0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6,int *param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_20 [6];
  undefined2 local_8;
  undefined1 local_6;
  
  FUN_10025f07((void *)((int)this + 4),param_1,0,0,0);
  *(undefined ***)this = &PTR_LAB_100b184c;
  *(int **)((int)this + 0x68) = param_7;
  uVar1 = (**(code **)(*param_7 + 0x14))();
  *(undefined4 *)((int)this + 0x6c) = uVar1;
  *(undefined4 *)((int)this + 0x70) = param_4;
  *(undefined4 *)((int)this + 0x74) = param_5;
  *(undefined4 *)((int)this + 0x78) = *param_6;
  local_20[0] = param_2;
  *(undefined4 *)((int)this + 0x7c) = param_6[1];
  local_20[1] = param_3;
  local_20[2] = 0;
  *(undefined4 *)((int)this + 0x80) = param_6[2];
  local_20[3] = 0;
  local_20[5] = 0;
  local_8 = 0;
  *(undefined4 *)((int)this + 0x84) = param_6[3];
  local_6 = 0;
  local_20[4] = 1;
  puVar3 = local_20;
  puVar4 = (undefined4 *)((int)this + 0x1c);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return this;
}

