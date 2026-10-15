/*
 * FUN_10005520 at 10005520
 * undefined FUN_10005520(void)
 * Address ranges: 10005520-100056a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10005520(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_c0;
  undefined1 auStack_bc [12];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  char local_44;
  undefined1 local_43;
  
  local_c0 = param_2;
  FUN_10096840(auStack_bc);
  if (*(char *)(param_1 + 0x224) == '\0') {
    iVar2 = FUN_10005bc0(param_1 + 0x14c,&local_c0);
    if (iVar2 == 0) {
      FUN_10005c60(param_1 + 0x14c,&local_c0,param_1 + 0x184);
      uVar3 = FUN_10007770(param_1,&local_b0,param_1 + 0x184);
      FUN_10005ac0(param_1 + 0x15c,&local_c0,uVar3);
    }
    if (*(uint *)(param_1 + 0x17c) != 0) {
      uVar4 = 0;
      do {
        if (*(int *)(*(int *)(param_1 + 0x178) + uVar4 * 4) == param_2) {
          if (uVar4 != 0xffffffff) {
            if (param_3 == '\0') {
              FUN_10002f20(param_1,param_2);
            }
            goto LAB_10005668;
          }
          break;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0x17c));
    }
    if (param_3 != '\0') {
      FUN_10002e30(param_1,param_2);
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(param_1 + 0x214) + *(int *)(param_1 + 0x220) * 4) + 0x9cc;
    iVar1 = FUN_10005d70(iVar2);
    if (iVar1 == 0) {
      uStack_a8 = *(undefined8 *)(param_1 + 0x18c);
      local_b0 = *(undefined8 *)(param_1 + 0x184);
      uStack_98 = *(undefined8 *)(param_1 + 0x19c);
      uStack_a0 = *(undefined8 *)(param_1 + 0x194);
      local_50 = *(undefined8 *)(param_1 + 0x1e4);
      uStack_88 = *(undefined8 *)(param_1 + 0x1ac);
      local_90 = *(undefined8 *)(param_1 + 0x1a4);
      uStack_78 = *(undefined8 *)(param_1 + 0x1bc);
      uStack_80 = *(undefined8 *)(param_1 + 0x1b4);
      local_48 = *(undefined4 *)(param_1 + 0x1ec);
      uStack_68 = *(undefined8 *)(param_1 + 0x1cc);
      local_70 = *(undefined8 *)(param_1 + 0x1c4);
      uStack_58 = *(undefined8 *)(param_1 + 0x1dc);
      uStack_60 = *(undefined8 *)(param_1 + 0x1d4);
      local_43 = 1;
      local_44 = param_3;
      FUN_10005e00(iVar2,&local_c0,&local_b0);
    }
    else {
      *(char *)(iVar1 + 0x6c) = param_3;
    }
  }
LAB_10005668:
  FUN_10096790(auStack_bc);
  return;
}

