/*
 * FUN_10021790 at 10021790
 * undefined FUN_10021790(void)
 * Address ranges: 10021790-10021863
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10021790(int param_1)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18 [2];
  
  FUN_10063900(*(int *)(*(int *)(*(int *)(param_1 + 0x138) + 0x3308) + 0x1304) + 4,0);
  iVar2 = *(int *)(param_1 + 0x138);
  local_20 = 0;
  local_1c = 0xffffffff;
  local_18[0] = 0xffffffff;
  uVar3 = FUN_1002f838(param_1 + 0x380,*(undefined4 *)(iVar2 + 0xa0),*(undefined4 *)(iVar2 + 0xa4),
                       *(undefined4 *)(param_1 + 0x28),*(undefined1 *)(*(int *)(iVar2 + 4) + 0x54),
                       &local_20,local_18,&local_1c);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    FUN_1002fb20(param_1 + 0x380);
    *(undefined4 *)(param_1 + 0x44c) = local_20;
    *(undefined4 *)(param_1 + 0x454) = local_1c;
    *(undefined4 *)(param_1 + 0x450) = local_18[0];
  }
  return bVar1;
}

