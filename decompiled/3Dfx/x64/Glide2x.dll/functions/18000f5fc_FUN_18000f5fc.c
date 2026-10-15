/*
 * FUN_18000f5fc at 18000f5fc
 * bool __fastcall FUN_18000f5fc(undefined8 * param_1, longlong * param_2, ulonglong param_3)
 * Address ranges: 18000f5fc-18000f6d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18000f5fc(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  bool bVar14;
  ulonglong local_res18 [2];
  undefined4 local_228;
  undefined4 local_224;
  undefined8 local_220 [67];
  
  local_res18[0] = param_3;
  FUN_180003614(local_220);
  lVar12 = 4;
  local_228 = 0x45474544;
  local_224 = 0x287;
  puVar9 = local_220;
  do {
    puVar13 = param_1;
    puVar11 = puVar9;
    uVar5 = puVar13[1];
    uVar6 = puVar13[2];
    uVar7 = puVar13[3];
    *puVar11 = *puVar13;
    puVar11[1] = uVar5;
    uVar5 = puVar13[4];
    uVar8 = puVar13[5];
    puVar11[2] = uVar6;
    puVar11[3] = uVar7;
    uVar6 = puVar13[6];
    uVar7 = puVar13[7];
    puVar11[4] = uVar5;
    puVar11[5] = uVar8;
    uVar5 = puVar13[8];
    uVar8 = puVar13[9];
    puVar11[6] = uVar6;
    puVar11[7] = uVar7;
    uVar6 = puVar13[10];
    uVar7 = puVar13[0xb];
    puVar11[8] = uVar5;
    puVar11[9] = uVar8;
    uVar5 = puVar13[0xc];
    uVar8 = puVar13[0xd];
    puVar11[10] = uVar6;
    puVar11[0xb] = uVar7;
    uVar1 = *(undefined4 *)(puVar13 + 0xe);
    uVar2 = *(undefined4 *)((longlong)puVar13 + 0x74);
    uVar3 = *(undefined4 *)(puVar13 + 0xf);
    uVar4 = *(undefined4 *)((longlong)puVar13 + 0x7c);
    puVar11[0xc] = uVar5;
    puVar11[0xd] = uVar8;
    *(undefined4 *)(puVar11 + 0xe) = uVar1;
    *(undefined4 *)((longlong)puVar11 + 0x74) = uVar2;
    *(undefined4 *)(puVar11 + 0xf) = uVar3;
    *(undefined4 *)((longlong)puVar11 + 0x7c) = uVar4;
    lVar12 = lVar12 + -1;
    puVar9 = puVar11 + 0x10;
    param_1 = puVar13 + 0x10;
  } while (lVar12 != 0);
  uVar1 = *(undefined4 *)(puVar13 + 0x10);
  uVar2 = *(undefined4 *)((longlong)puVar13 + 0x84);
  uVar3 = *(undefined4 *)(puVar13 + 0x11);
  local_res18[0] = local_res18[0] & 0xffffffff00000000;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = *(undefined4 *)((longlong)puVar13 + 0x7c);
  *(undefined4 *)(puVar11 + 0x10) = uVar1;
  *(undefined4 *)((longlong)puVar11 + 0x84) = uVar2;
  *(undefined4 *)(puVar11 + 0x11) = uVar3;
  iVar10 = (**(code **)(*param_2 + 0x10))(param_2,0x214,&local_228,local_res18);
  if (iVar10 == 0) {
    bVar14 = (int)local_res18[0] == 0x214;
  }
  else {
    bVar14 = false;
  }
  return bVar14;
}

