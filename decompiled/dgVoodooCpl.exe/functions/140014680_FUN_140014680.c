/*
 * FUN_140014680 at 140014680
 * char __fastcall FUN_140014680(int * param_1, undefined8 param_2, undefined4 * param_3)
 * Address ranges: 140014680-140014845
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_140014680(int *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  longlong local_518 [4];
  longlong local_4f8;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  char *local_4e0;
  undefined4 local_4d8;
  undefined8 local_4d0;
  undefined8 local_448 [66];
  undefined8 local_238 [66];
  
  FUN_1400098a8(local_238);
  FUN_140023f00(local_518,param_2);
  cVar5 = FUN_14001ba74(param_1,local_518,(ulonglong)param_3);
  if (cVar5 == '\0') {
    FUN_140014930(&local_4f8);
    if (param_3 != (undefined4 *)0x0) {
      local_4e8 = param_3[2];
      local_4f0 = *param_3;
      local_4e0 = "[dgVoodoo IniParser] ";
      local_4d8 = param_3[6];
      local_4ec = param_3[1];
      local_4d0 = 0;
    }
    bVar6 = FUN_140014a14((longlong)&local_4f8,local_518,1);
    if (bVar6 != 0) {
      cVar5 = FUN_140019c8c((undefined4 *)local_238,&local_4f8,(ulonglong)param_3);
      lVar12 = 4;
      if (cVar5 == '\0') {
        FUN_14002511c((undefined1 *)local_448,0,0x20c);
        puVar8 = FUN_1400098a8(local_448);
      }
      else {
        lVar11 = 4;
        puVar8 = local_448;
        puVar9 = local_238;
        do {
          puVar10 = puVar9;
          puVar7 = puVar8;
          uVar1 = puVar10[1];
          uVar2 = puVar10[2];
          uVar3 = puVar10[3];
          *puVar7 = *puVar10;
          puVar7[1] = uVar1;
          uVar1 = puVar10[4];
          uVar4 = puVar10[5];
          puVar7[2] = uVar2;
          puVar7[3] = uVar3;
          uVar2 = puVar10[6];
          uVar3 = puVar10[7];
          puVar7[4] = uVar1;
          puVar7[5] = uVar4;
          uVar1 = puVar10[8];
          uVar4 = puVar10[9];
          puVar7[6] = uVar2;
          puVar7[7] = uVar3;
          uVar2 = puVar10[10];
          uVar3 = puVar10[0xb];
          puVar7[8] = uVar1;
          puVar7[9] = uVar4;
          uVar1 = puVar10[0xc];
          uVar4 = puVar10[0xd];
          puVar7[10] = uVar2;
          puVar7[0xb] = uVar3;
          uVar2 = puVar10[0xe];
          uVar3 = puVar10[0xf];
          puVar7[0xc] = uVar1;
          puVar7[0xd] = uVar4;
          puVar7[0xe] = uVar2;
          puVar7[0xf] = uVar3;
          lVar11 = lVar11 + -1;
          puVar8 = puVar7 + 0x10;
          puVar9 = puVar10 + 0x10;
        } while (lVar11 != 0);
        uVar1 = *(undefined8 *)((longlong)puVar10 + 0x84);
        *(undefined8 *)((longlong)puVar7 + 0x7c) = *(undefined8 *)((longlong)puVar10 + 0x7c);
        *(undefined8 *)((longlong)puVar7 + 0x84) = uVar1;
        puVar8 = local_448;
      }
      do {
        piVar13 = param_1;
        puVar9 = puVar8;
        uVar1 = puVar9[1];
        *(undefined8 *)piVar13 = *puVar9;
        *(undefined8 *)(piVar13 + 2) = uVar1;
        uVar1 = puVar9[3];
        *(undefined8 *)(piVar13 + 4) = puVar9[2];
        *(undefined8 *)(piVar13 + 6) = uVar1;
        uVar1 = puVar9[5];
        *(undefined8 *)(piVar13 + 8) = puVar9[4];
        *(undefined8 *)(piVar13 + 10) = uVar1;
        uVar1 = puVar9[7];
        *(undefined8 *)(piVar13 + 0xc) = puVar9[6];
        *(undefined8 *)(piVar13 + 0xe) = uVar1;
        uVar1 = puVar9[9];
        *(undefined8 *)(piVar13 + 0x10) = puVar9[8];
        *(undefined8 *)(piVar13 + 0x12) = uVar1;
        uVar1 = puVar9[0xb];
        *(undefined8 *)(piVar13 + 0x14) = puVar9[10];
        *(undefined8 *)(piVar13 + 0x16) = uVar1;
        uVar1 = puVar9[0xd];
        *(undefined8 *)(piVar13 + 0x18) = puVar9[0xc];
        *(undefined8 *)(piVar13 + 0x1a) = uVar1;
        uVar1 = puVar9[0xf];
        *(undefined8 *)(piVar13 + 0x1c) = puVar9[0xe];
        *(undefined8 *)(piVar13 + 0x1e) = uVar1;
        lVar12 = lVar12 + -1;
        puVar8 = puVar9 + 0x10;
        param_1 = piVar13 + 0x20;
      } while (lVar12 != 0);
      uVar1 = *(undefined8 *)((longlong)puVar9 + 0x84);
      *(undefined8 *)(piVar13 + 0x1f) = *(undefined8 *)((longlong)puVar9 + 0x7c);
      *(undefined8 *)(piVar13 + 0x21) = uVar1;
    }
    FUN_1400149d4(&local_4f8);
  }
  FUN_140024020(local_518);
  return cVar5;
}

