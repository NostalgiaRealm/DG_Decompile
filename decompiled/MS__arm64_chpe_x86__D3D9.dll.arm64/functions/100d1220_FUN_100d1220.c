/*
 * FUN_100d1220 at 100d1220
 * undefined FUN_100d1220(void)
 * Address ranges: 100d1220-100d12ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100d1220(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  
  uVar3 = 0x8876086c;
  if ((param_3 != (int *)0x0) && (*param_3 == 0xc)) {
    iVar1 = param_3[1];
    uVar4 = FUN_100037d0(iVar1);
    if (((uVar4 & 1) != 0) &&
       (uVar2 = param_3[2], ((uVar2 < 3 && param_5 != (undefined4 *)0x0) && uVar2 != 2) && uVar2 < 2
       )) {
      uVar3 = FUN_100067e0(param_1 + -0x70,param_2,param_4,iVar1,&local_50);
      *param_5 = 0x18;
      param_5[1] = local_50;
      param_5[2] = uStack_4c;
      param_5[3] = local_48;
      param_5[4] = uStack_44;
      param_5[5] = 0;
    }
  }
  return uVar3;
}

