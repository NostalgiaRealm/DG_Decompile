/*
 * FUN_1005bf60 at 1005bf60
 * undefined FUN_1005bf60(void)
 * Address ranges: 1005bf60-1005c13b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_1005bf60(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5,uint param_6)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_100;
  undefined1 auStack_fc [12];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  undefined8 uStack_48;
  
  iVar3 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar3 == 0) {
    FUN_1004bc70(0);
  }
  FUN_10096840(auStack_fc);
  uVar4 = 0x80070057;
  if ((param_4 != 0) && (uVar4 = 0x887602e0, param_2 - 1U < 6)) {
    local_100 = param_3 & 0xffffffdf;
    puVar1 = (uint *)(param_1 + 0x44);
    uVar4 = 0x887602e1;
    if (*puVar1 != local_100) {
      FUN_10059b10(param_1 + 0x940,&local_f0,&local_100);
      *(undefined8 *)(param_1 + 0x4c) = uStack_e8;
      *(undefined8 *)puVar1 = local_f0;
      *(undefined8 *)(param_1 + 0x5c) = uStack_d8;
      *(undefined8 *)(param_1 + 0x54) = uStack_e0;
      *(undefined8 *)(param_1 + 0x6c) = uStack_c8;
      *(undefined8 *)(param_1 + 100) = local_d0;
      *(undefined8 *)(param_1 + 0x7c) = uStack_b8;
      *(undefined8 *)(param_1 + 0x74) = uStack_c0;
      *(undefined8 *)(param_1 + 0x8c) = uStack_a8;
      *(undefined8 *)(param_1 + 0x84) = local_b0;
      *(undefined8 *)(param_1 + 0x9c) = uStack_98;
      *(undefined8 *)(param_1 + 0x94) = uStack_a0;
      *(undefined8 *)(param_1 + 0xac) = uStack_88;
      *(undefined8 *)(param_1 + 0xa4) = local_90;
      *(undefined8 *)(param_1 + 0xbc) = uStack_78;
      *(undefined8 *)(param_1 + 0xb4) = uStack_80;
      *(undefined8 *)(param_1 + 0xcc) = uStack_68;
      *(undefined8 *)(param_1 + 0xc4) = local_70;
      *(undefined8 *)(param_1 + 0xdc) = uStack_58;
      *(undefined8 *)(param_1 + 0xd4) = uStack_60;
      *(undefined8 *)(param_1 + 0xec) = uStack_48;
      *(undefined8 *)(param_1 + 0xe4) = local_50;
    }
    if (*(int *)(param_1 + 0x48) != 3 && *(int *)(param_1 + 0x48) != 0) {
      iVar3 = *(int *)(param_1 + 0x18);
      if (((iVar3 == 0) || (*(char *)(iVar3 + 9) == '\0')) &&
         ((iVar2 = *(int *)(param_1 + 0x28), iVar2 == 0 || (*(char *)(iVar2 + 9) == '\0')))) {
        if (((iVar3 == 0) || (*(char *)(iVar3 + 8) == '\0')) &&
           ((iVar2 == 0 || (*(char *)(iVar2 + 8) == '\0')))) {
          uVar4 = FUN_1005ada0(param_1,param_2,puVar1,param_4,param_5,0,0,3,
                               ~(byte)(param_6 >> 3) & 1);
        }
        else {
          uVar4 = 0x887601c2;
        }
      }
      else {
        uVar4 = 0x887601ae;
      }
    }
  }
  FUN_10096790(auStack_fc);
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar4;
}

