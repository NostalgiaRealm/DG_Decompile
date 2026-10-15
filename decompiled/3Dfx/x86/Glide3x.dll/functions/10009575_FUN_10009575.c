/*
 * FUN_10009575 at 10009575
 * undefined4 __fastcall FUN_10009575(int param_1)
 * Address ranges: 10009575-1000974a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10009575(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 extraout_ECX;
  undefined4 *puVar7;
  undefined4 local_74 [2];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 *local_8;
  
  piVar2 = FUN_1003e493((void *)(*(int *)(param_1 + 0x3300) + 0x520),*(int **)(param_1 + 0x3304),
                        *(int *)(*(int *)(param_1 + 4) + 0x33) *
                        *(int *)(*(int *)(param_1 + 4) + 0x2f),0,1);
  *(int **)(param_1 + 0x3328) = piVar2;
  uVar4 = 0;
  if (piVar2 != (int *)0x0) {
    piVar2 = *(int **)(*(int *)(param_1 + 0x3304) * 0x18 + 0x520 + *(int *)(param_1 + 0x3300));
    uVar3 = (**(code **)(*piVar2 + 0x3c))(piVar2,1);
    *(undefined4 *)(param_1 + 0x3310) = uVar3;
    local_10 = 1;
    local_28 = 1;
    local_20 = 1;
    local_3c = 1;
    local_58 = 1;
    local_56 = 1;
    local_50 = 1;
    puVar7 = (undefined4 *)(param_1 + 0x332c);
    local_14 = 0x10;
    local_24 = 0x10;
    local_64 = 0x100;
    local_5c = 0x100;
    local_18 = 0;
    local_c = 0;
    local_1c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_74[0] = 3;
    local_6c = 0;
    local_68 = 0;
    local_60 = 0;
    local_54 = 0x3c;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_8 = puVar7;
    uVar4 = FUN_1003e401((void *)(*(int *)(param_1 + 0x3300) + 0x520),*(int *)(param_1 + 0x3304),
                         &local_3c,0,local_74,0x80,extraout_ECX,extraout_ECX,puVar7);
    if ((char)uVar4 != '\0') {
      puVar1 = (undefined4 *)(param_1 + 0x3330);
      piVar2 = *(int **)(*(int *)(param_1 + 0x3304) * 0x18 + 0x520 + *(int *)(param_1 + 0x3300));
      iVar5 = (**(code **)(*piVar2 + 0x38))(piVar2,&local_18,&DAT_10054300,puVar1);
      if (-1 < iVar5) {
        puVar7 = (undefined4 *)(param_1 + 0x3334);
        piVar2 = *(int **)(*(int *)(param_1 + 0x3304) * 0x18 + 0x520 + *(int *)(param_1 + 0x3300));
        iVar5 = (**(code **)(*piVar2 + 0x38))(piVar2,&local_28,&DAT_10054300,puVar7);
        if (-1 < iVar5) {
          puVar6 = FUN_1003e752(-(uint)(*(int *)(param_1 + 0x3300) != 0) &
                                *(int *)(param_1 + 0x3300) + 0x520U,*(int *)(param_1 + 0x3304),0,
                                0x200,1);
          *(undefined4 **)(param_1 + 0x330c) = puVar6;
          if (puVar6 != (undefined4 *)0x0) {
            FUN_10009a7e(param_1);
            uVar3 = FUN_10009af4(param_1);
            return CONCAT31((int3)((uint)uVar3 >> 8),1);
          }
          (**(code **)(*(int *)*puVar7 + 8))((int *)*puVar7);
          *puVar7 = 0;
        }
        (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
        *puVar1 = 0;
        puVar7 = local_8;
      }
      uVar4 = (**(code **)(*(int *)*puVar7 + 8))((int *)*puVar7);
      *puVar7 = 0;
    }
  }
  return uVar4 & 0xffffff00;
}

