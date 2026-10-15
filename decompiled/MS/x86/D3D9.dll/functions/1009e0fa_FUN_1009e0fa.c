/*
 * FUN_1009e0fa at 1009e0fa
 * undefined4 __stdcall FUN_1009e0fa(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1009e0fa-1009e172
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009e0fa(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  
  iVar1 = param_1;
  puVar3 = (uint *)(*(int *)(param_1 + -100) + -0x58e4);
  if (*(int *)(param_1 + -100) == 0) {
    puVar3 = (uint *)&DAT_00000dd0;
  }
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*puVar3 >> 2) & 1);
  if ((*(uint *)(iVar1 + -0x24) & 0x400) == 0) {
    uVar2 = (uint)*(ushort *)(iVar1 + -0x48);
  }
  else {
    uVar2 = 1;
  }
  uVar4 = 0x8876086c;
  if ((param_2 < uVar2) && (param_3 != (undefined4 *)0x0)) {
    uVar4 = FUN_1009d053(*(int *)(iVar1 + 0x10 + param_2 * 4) + 0x5c,0x100d1370,param_3);
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar4;
}

