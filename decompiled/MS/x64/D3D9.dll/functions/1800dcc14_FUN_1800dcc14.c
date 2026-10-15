/*
 * FUN_1800dcc14 at 1800dcc14
 * undefined __fastcall FUN_1800dcc14(longlong * param_1, ulonglong param_2, undefined8 param_3, undefined8 * param_4)
 * Address ranges: 1800dcc14-1800dccdd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800dcc14(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong local_res8;
  
  lVar9 = (param_2 & 0xffffffff) * 0x118;
  *(undefined8 *)(lVar9 + *param_1) = param_3;
  local_res8 = 2;
  puVar8 = (undefined8 *)(*param_1 + 8 + lVar9);
  puVar7 = param_4;
  do {
    uVar6 = puVar7[1];
    *puVar8 = *puVar7;
    puVar8[1] = uVar6;
    uVar6 = puVar7[3];
    puVar8[2] = puVar7[2];
    puVar8[3] = uVar6;
    uVar6 = puVar7[5];
    puVar8[4] = puVar7[4];
    puVar8[5] = uVar6;
    uVar6 = puVar7[7];
    puVar8[6] = puVar7[6];
    puVar8[7] = uVar6;
    uVar6 = puVar7[9];
    puVar8[8] = puVar7[8];
    puVar8[9] = uVar6;
    uVar6 = puVar7[0xb];
    puVar8[10] = puVar7[10];
    puVar8[0xb] = uVar6;
    uVar3 = *(undefined4 *)((longlong)puVar7 + 100);
    uVar4 = *(undefined4 *)(puVar7 + 0xd);
    uVar5 = *(undefined4 *)((longlong)puVar7 + 0x6c);
    *(undefined4 *)(puVar8 + 0xc) = *(undefined4 *)(puVar7 + 0xc);
    *(undefined4 *)((longlong)puVar8 + 100) = uVar3;
    *(undefined4 *)(puVar8 + 0xd) = uVar4;
    *(undefined4 *)((longlong)puVar8 + 0x6c) = uVar5;
    puVar1 = puVar7 + 0xe;
    uVar3 = *(undefined4 *)((longlong)puVar7 + 0x74);
    uVar4 = *(undefined4 *)(puVar7 + 0xf);
    uVar5 = *(undefined4 *)((longlong)puVar7 + 0x7c);
    puVar7 = puVar7 + 0x10;
    *(undefined4 *)(puVar8 + 0xe) = *(undefined4 *)puVar1;
    *(undefined4 *)((longlong)puVar8 + 0x74) = uVar3;
    *(undefined4 *)(puVar8 + 0xf) = uVar4;
    *(undefined4 *)((longlong)puVar8 + 0x7c) = uVar5;
    puVar8 = puVar8 + 0x10;
    local_res8 = local_res8 + -1;
  } while (local_res8 != 0);
  *puVar8 = *puVar7;
  plVar2 = *(longlong **)((ulonglong)*(uint *)(param_1 + 3) * 0x18c0 + 0x6b0 + param_1[2]);
  (**(code **)(*plVar2 + 0xa0))(plVar2,param_4,&local_res8);
  *(longlong *)(lVar9 + 0x110 + *param_1) = local_res8;
  return;
}

