/*
 * FUN_100052a0 at 100052a0
 * undefined FUN_100052a0(void)
 * Address ranges: 100052a0-1000537b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100052a0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 local_b0 [4];
  undefined1 auStack_a0 [128];
  
  local_b0[0] = param_2;
  if (*(char *)(param_1 + 0x224) == '\0') {
    FUN_10005c60(param_1 + 0x14c,local_b0,param_3);
    uVar3 = FUN_10007770(param_1,auStack_a0,param_3);
    FUN_10005ac0(param_1 + 0x15c,local_b0,uVar3);
    FUN_100030e0(param_1,param_2,param_3);
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x214) + *(int *)(param_1 + 0x220) * 4);
    *(undefined1 *)(param_3 + 0x6d) = 1;
    iVar1 = iVar1 + 0x9cc;
    iVar2 = FUN_10005d70(iVar1);
    if (iVar2 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined1 *)(iVar2 + 0x6c);
    }
    *(undefined1 *)(param_3 + 0x6c) = uVar4;
    FUN_10005e00(iVar1,local_b0,param_3);
  }
  return;
}

