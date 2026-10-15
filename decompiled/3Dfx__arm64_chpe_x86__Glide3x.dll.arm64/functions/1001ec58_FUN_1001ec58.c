/*
 * FUN_1001ec58 at 1001ec58
 * undefined FUN_1001ec58(void)
 * Address ranges: 1001ec58-1001ed17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001ec58(int param_1,undefined8 param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_20 [16];
  
  piVar1 = (int *)(param_1 + 0x98c);
  iVar2 = *(int *)(*(int *)(param_1 + 0x138) + 0x3308);
  uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0x1300) + 0xc);
  uVar3 = *(undefined8 *)(*(int *)(iVar2 + 0x1304) + 0x938);
  iVar2 = *(int *)(param_1 + 0x988) + 0x38;
  if (*piVar1 + 4U < 0x401) {
    iVar2 = FUN_1005bfb0(iVar2,auStack_20,1,uVar4,uVar3);
    uVar4 = (undefined4)*(undefined8 *)(iVar2 + 8);
  }
  else {
    iVar2 = FUN_1005bfb0(iVar2,auStack_20,2,uVar4,uVar3);
    uVar4 = (undefined4)*(undefined8 *)(iVar2 + 8);
    *piVar1 = 0;
  }
  iVar2 = *piVar1;
  *piVar1 = iVar2 + 4;
  *param_3 = uVar4;
  return iVar2;
}

