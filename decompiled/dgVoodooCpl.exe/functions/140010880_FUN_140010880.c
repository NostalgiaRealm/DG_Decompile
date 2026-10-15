/*
 * FUN_140010880 at 140010880
 * undefined8 __fastcall FUN_140010880(longlong param_1, uint param_2, uint param_3, undefined8 * param_4)
 * Address ranges: 140010880-1400109bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140010880(longlong param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong in_RAX;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138 [32];
  undefined8 local_38;
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))();
    *(char *)(param_1 + 0x21) = (char)in_RAX;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if (*(char *)(param_1 + 0x22) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    in_RAX = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x58))();
    if (param_2 < (uint)in_RAX) {
      (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))(*(longlong **)(param_1 + 0x10),param_2);
      in_RAX = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x70))
                         (*(longlong **)(param_1 + 0x10),param_2);
      if (param_3 < (uint)in_RAX) {
        (**(code **)(**(longlong **)(param_1 + 0x10) + 0x78))
                  (*(longlong **)(param_1 + 0x10),&local_178,param_2,param_3);
        *param_4 = local_178;
        param_4[1] = uStack_170;
        lVar7 = 2;
        param_4[2] = local_168;
        param_4[3] = uStack_160;
        param_4[4] = local_158;
        param_4[5] = uStack_150;
        param_4[6] = local_148;
        param_4[7] = uStack_140;
        puVar5 = local_138;
        puVar6 = param_4 + 8;
        do {
          uVar1 = puVar5[1];
          uVar2 = puVar5[2];
          uVar3 = puVar5[3];
          *puVar6 = *puVar5;
          puVar6[1] = uVar1;
          uVar1 = puVar5[4];
          uVar4 = puVar5[5];
          puVar6[2] = uVar2;
          puVar6[3] = uVar3;
          uVar2 = puVar5[6];
          uVar3 = puVar5[7];
          puVar6[4] = uVar1;
          puVar6[5] = uVar4;
          uVar1 = puVar5[8];
          uVar4 = puVar5[9];
          puVar6[6] = uVar2;
          puVar6[7] = uVar3;
          uVar2 = puVar5[10];
          uVar3 = puVar5[0xb];
          puVar6[8] = uVar1;
          puVar6[9] = uVar4;
          uVar1 = puVar5[0xc];
          uVar4 = puVar5[0xd];
          puVar6[10] = uVar2;
          puVar6[0xb] = uVar3;
          uVar2 = puVar5[0xe];
          uVar3 = puVar5[0xf];
          puVar6[0xc] = uVar1;
          puVar6[0xd] = uVar4;
          puVar6[0xe] = uVar2;
          puVar6[0xf] = uVar3;
          lVar7 = lVar7 + -1;
          puVar5 = puVar5 + 0x10;
          puVar6 = puVar6 + 0x10;
        } while (lVar7 != 0);
        param_4[0x28] = local_38;
        return CONCAT71((int7)((ulonglong)local_38 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

