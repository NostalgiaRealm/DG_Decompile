/*
 * FUN_180112e78 at 180112e78
 * undefined FUN_180112e78(void)
 * Address ranges: 180112e78-180112fdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180112e78(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined8 uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  ulonglong local_40 [2];
  
  auVar5 = FUN_18010ecc8(param_1,param_2,*(undefined2 *)(param_3 + 0x12),0xe4,0,0,1,0);
  uVar3 = FUN_18010f178(param_1,auVar5._8_8_,0xffffffff,1);
  local_40[0] = uVar3;
  FUN_1801060c0(param_2,0x500200100700,uVar3 & 0xffffffff,auVar5._0_8_ & 0xffffffff,0,0);
  FUN_1801060c0(param_2,0x20810200012010,uVar3 & 0xffffffff,0xffffffff,0,
                1 << (ulonglong)(*(uint *)(param_3 + 0xc) & 3));
  FUN_18010f268(param_1,param_2,local_40);
  FUN_180113dc0(param_1,param_2,0);
  uVar1 = 0x750100030000;
  if (*(char *)(param_3 + 1) == '\0') {
    uVar1 = 0x740100030000;
  }
  FUN_1801060c0(param_2,uVar1,0xffffffff,0xffffffff,0,0);
  iVar2 = (int)param_2[1] - (int)*param_2;
  FUN_1801060c0(param_2,0xe80100010000,0xffffffff,0xffffffff,0,0);
  lVar4 = FUN_180112290(param_1,*(undefined2 *)(param_3 + 0x10));
  local_40[0] = CONCAT44(local_40[0]._4_4_,
                         (int)param_2[1] - (int)*param_2 |
                         (uint)(*(char *)(param_1 + 0x218) != '\0') << 0x1f);
  FUN_180108518(lVar4 + 8,local_40);
  *(char *)(*param_2 + (ulonglong)(iVar2 - 1)) = ((char)param_2[1] - (char)*param_2) - (char)iVar2;
  return;
}

