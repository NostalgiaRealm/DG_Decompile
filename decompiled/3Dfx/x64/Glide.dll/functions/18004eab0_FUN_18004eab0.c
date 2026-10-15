/*
 * FUN_18004eab0 at 18004eab0
 * undefined __fastcall FUN_18004eab0(longlong * param_1, uint * param_2, longlong param_3, undefined8 param_4)
 * Address ranges: 18004eab0-18004ecca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004eab0(longlong *param_1,uint *param_2,longlong param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  
  uVar7 = (ulonglong)(param_2[6] - param_2[4]) / (ulonglong)*(uint *)(param_3 + 0x20);
  uVar8 = (ulonglong)(param_2[7] - param_2[5]) / (ulonglong)*(uint *)(param_3 + 0x24);
  uVar1 = (param_2[10] - param_2[8]) * 2;
  uVar6 = (uint)uVar7;
  bVar9 = uVar1 <= uVar6;
  uVar4 = (uint)uVar8;
  uVar2 = (param_2[0xb] - param_2[9]) * 2;
  bVar10 = uVar2 <= uVar4;
  if ((uVar1 <= uVar6) || (uVar2 <= uVar4)) {
    FUN_18005053c(param_1,param_3,2);
    if ((1 < *(uint *)(param_3 + 0x28)) && ((uVar1 <= uVar6 || (uVar2 <= uVar4)))) {
      cVar3 = (**(code **)(*param_1 + 0x58))(param_1,param_4);
      if (cVar3 != '\0') {
        uVar1 = param_2[2];
        uVar2 = param_2[3];
        while ((bVar9 || (bVar10))) {
          local_78 = 0xbf800000;
          local_74 = 0x3f800000;
          local_68 = 0x3f800000;
          local_64 = 0x3f800000;
          local_58 = 0xbf800000;
          local_54 = 0xbf800000;
          local_48 = 0x3f800000;
          local_44 = 0xbf800000;
          local_6c = 0.0 / (float)uVar2;
          local_70 = 0.0 / (float)uVar1;
          local_60 = (((float)param_2[2] - 0.5) + 0.5) / (float)uVar1;
          local_4c = (((float)param_2[3] - 0.5) + 0.5) / (float)uVar2;
          local_5c = local_6c;
          local_50 = local_70;
          local_40 = local_60;
          local_3c = local_4c;
          (**(code **)(*param_1 + 0x60))(param_1,&local_78,param_2[2],param_2[3],param_4);
          lVar5 = 0;
          *(ulonglong *)(param_2 + 2) =
               CONCAT44((int)((longlong)*(undefined8 *)(param_2 + 2) >> 0x21),
                        (int)*(undefined8 *)(param_2 + 2) >> 1);
          do {
            param_2[lVar5 + 4] = (int)param_2[lVar5 + 4] >> 1;
            lVar5 = lVar5 + 1;
          } while (lVar5 != 4);
          uVar7 = uVar7 >> 1;
          uVar8 = uVar8 >> 1;
          bVar9 = (param_2[10] - param_2[8]) * 2 <= (uint)uVar7;
          bVar10 = (param_2[0xb] - param_2[9]) * 2 <= (uint)uVar8;
        }
        if ((param_2[10] - param_2[8] == param_2[6] - param_2[4]) ||
           (param_2[0xb] - param_2[9] == param_2[7] - param_2[5])) {
          *param_2 = *param_2 & 0xffffffc7;
        }
      }
    }
  }
  return;
}

