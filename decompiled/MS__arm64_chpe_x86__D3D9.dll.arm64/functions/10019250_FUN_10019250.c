/*
 * FUN_10019250 at 10019250
 * undefined FUN_10019250(void)
 * Address ranges: 10019250-10019867
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10019250(uint *param_1,int *param_2,byte *param_3)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  ulonglong local_40 [2];
  
  bVar2 = *param_3 & 0x7f;
  if (0x2d < bVar2) {
    if (bVar2 != 0x60) {
      return;
    }
    FUN_10016cc0(param_1,param_2,param_3,0);
    goto LAB_10019824;
  }
  switch(bVar2) {
  case 0x19:
    FUN_10019908(param_1,param_2,0);
    FUN_10002470(param_2,0xe80100010000,0xffffffff,0xffffffff,0,0);
    iVar5 = FUN_10016268(param_1,*(undefined2 *)(param_3 + 0x10));
    puVar1 = (uint *)(iVar5 + 4);
    uVar10 = 0x80000000;
    if ((char)param_1[0x7b] == '\0') {
      uVar10 = 0;
    }
    local_40[0] = CONCAT44(local_40[0]._4_4_,param_2[1] - *param_2 | uVar10);
    goto LAB_1001984c;
  case 0x1a:
    if (param_3[3] == 0) {
      FUN_10002470(param_2,0x8810200012010,*param_1 | 0x80000000,0xffffffff,
                   (ulonglong)*(ushort *)(param_3 + 0x10) << 4,0);
    }
    else {
      auVar11 = FUN_10014800(param_1,param_2,*(undefined2 *)(param_3 + 0x12),0xe4,0,0,1,0);
      uVar8 = FUN_10014cc0(param_1,auVar11._8_8_,0xffffffff,1);
      local_40[0] = uVar8;
      FUN_10002470(param_2,0x500200100700,uVar8 & 0xffffffff,auVar11._0_8_ & 0xffffffff,0,0);
      FUN_10002470(param_2,0x20810200012010,uVar8 & 0xffffffff,0xffffffff,0,
                   1 << (ulonglong)(*(uint *)(param_3 + 0xc) & 3));
      FUN_10014dd8(param_1,param_2,local_40);
    }
    FUN_10019908(param_1,param_2,0);
    uVar9 = 0x750100030000;
    if (param_3[1] == 0) {
      uVar9 = 0x740100030000;
    }
    FUN_10002470(param_2,uVar9,0xffffffff,0xffffffff,0,0);
    piVar7 = param_2 + 1;
    iVar5 = *param_2;
    iVar3 = *piVar7;
    FUN_10002470(param_2,0xe80100010000,0xffffffff,0xffffffff,0,0);
    iVar6 = FUN_10016268(param_1,*(undefined2 *)(param_3 + 0x10));
    uVar10 = 0x80000000;
    if ((char)param_1[0x7b] == '\0') {
      uVar10 = 0;
    }
    local_40[0] = CONCAT44(local_40[0]._4_4_,uVar10 | *piVar7 - *param_2);
    FUN_10007100(iVar6 + 4,local_40);
    *(char *)((iVar3 - iVar5) + *param_2 + -1) =
         ((char)*piVar7 - (char)(iVar3 - iVar5)) - (char)*param_2;
    break;
  case 0x1b:
    uVar9 = 1;
    goto LAB_100192a4;
  case 0x1c:
    if ((char)param_1[0x7b] != '\0') {
      FUN_10019908(param_1,param_2,0);
      FUN_10002470(param_2,0xc30100000000,0xffffffff,0xffffffff,0,0);
    }
    break;
  case 0x1d:
    uVar9 = 1;
    goto LAB_100192bc;
  case 0x1e:
    param_1[0x28] = param_1[0x26] | param_1[0x28];
    param_1[0x29] = param_1[0x27] | param_1[0x29];
    FUN_10019a40(param_1);
    piVar7 = (int *)FUN_10016268(param_1,*(undefined2 *)(param_3 + 0x10));
    *piVar7 = param_2[1] - *param_2;
    break;
  case 0x26:
    uVar9 = 0;
LAB_100192a4:
    FUN_100165c8(param_1,param_2,param_3,uVar9);
    break;
  case 0x27:
    uVar9 = 0;
LAB_100192bc:
    FUN_10016818(param_1,param_2,param_3,uVar9);
    break;
  case 0x28:
    puVar1 = param_1 + 0x7a;
    if (param_3[3] == 0) {
      uVar10 = *param_1;
      uVar4 = *(ushort *)(param_3 + 0x10);
      FUN_10019908(param_1,param_2,0);
      FUN_10002470(param_2,0x8810200012010,uVar10 | 0x80000000,0xffffffff,(ulonglong)uVar4 << 4,0);
      FUN_10002470(param_2,0x840100110000,0xffffffff,0xffffffff,0,0);
    }
    else {
      FUN_10016cc0(param_1,param_2,param_3,1);
    }
    param_1[*puVar1 * 2 + 0x49] = param_2[1] - *param_2;
    param_1[*puVar1 * 2 + 0x4a] = 0;
    *puVar1 = *puVar1 + 1;
    break;
  case 0x29:
    FUN_10016b20(param_1,param_2,param_3,1);
    puVar1 = param_1 + 0x7a;
    param_1[*puVar1 * 2 + 0x49] = param_2[1] - *param_2;
    param_1[*puVar1 * 2 + 0x4a] = 0;
    *puVar1 = *puVar1 + 1;
    break;
  case 0x2a:
    FUN_10019908(param_1,param_2,0);
    FUN_10002470(param_2,0xe90100012000,0xffffffff,0xffffffff,0,0x12345678);
    puVar1 = param_1 + 0x7a;
    param_1[*puVar1 * 2 + 0x48] = param_2[1] - *param_2;
    uVar10 = param_1[*puVar1 * 2 + 0x47];
    if (uVar10 != 0) {
      *(uint *)(uVar10 + *param_2 + -4) = (param_2[1] - uVar10) - *param_2;
      param_1[*puVar1 * 2 + 0x47] = 0;
    }
    break;
  case 0x2b:
    FUN_10019908(param_1,param_2,0);
    puVar1 = param_1 + 0x7a;
    uVar10 = *puVar1;
    *puVar1 = uVar10 - 1;
    uVar10 = param_1[(uVar10 - 1) * 2 + 0x49];
    if (uVar10 != 0) {
      *(uint *)(uVar10 + *param_2 + -4) = (param_2[1] - uVar10) - *param_2;
    }
    uVar10 = param_1[*puVar1 * 2 + 0x4a];
    if (uVar10 != 0) {
      *(uint *)(uVar10 + *param_2 + -4) = (param_2[1] - uVar10) - *param_2;
    }
    break;
  case 0x2c:
    FUN_10019908(param_1,param_2,0);
    FUN_10002470(param_2,0xe90100012000,0xffffffff,0xffffffff,0,0x12345678);
    goto LAB_10019824;
  case 0x2d:
    FUN_10016b20(param_1,param_2,param_3,0);
LAB_10019824:
    local_40[0] = CONCAT44(local_40[0]._4_4_,param_2[1] - *param_2);
    puVar1 = param_1 + param_1[0x79] * 6 + 0x2e;
LAB_1001984c:
    FUN_10007100(puVar1,local_40);
  }
  return;
}

