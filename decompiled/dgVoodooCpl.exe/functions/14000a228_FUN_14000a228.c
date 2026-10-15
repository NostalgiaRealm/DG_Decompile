/*
 * FUN_14000a228 at 14000a228
 * undefined __fastcall FUN_14000a228(longlong param_1, LPWSTR param_2)
 * Address ranges: 14000a228-14000a2de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000a228(longlong param_1,LPWSTR param_2)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  LPWSTR pWVar8;
  longlong lVar9;
  
  uVar6 = FUN_14000e460(param_1,0x402);
  uVar6 = FUN_14000e270(param_1,0x402,(ulonglong)uVar6);
  lVar9 = 2;
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x1b38) + 0x10 + (ulonglong)uVar6 * 0x218);
  pWVar8 = param_2;
  do {
    uVar5 = puVar7[1];
    *(undefined8 *)pWVar8 = *puVar7;
    *(undefined8 *)(pWVar8 + 4) = uVar5;
    uVar5 = puVar7[3];
    *(undefined8 *)(pWVar8 + 8) = puVar7[2];
    *(undefined8 *)(pWVar8 + 0xc) = uVar5;
    uVar5 = puVar7[5];
    *(undefined8 *)(pWVar8 + 0x10) = puVar7[4];
    *(undefined8 *)(pWVar8 + 0x14) = uVar5;
    uVar5 = puVar7[7];
    *(undefined8 *)(pWVar8 + 0x18) = puVar7[6];
    *(undefined8 *)(pWVar8 + 0x1c) = uVar5;
    uVar5 = puVar7[9];
    *(undefined8 *)(pWVar8 + 0x20) = puVar7[8];
    *(undefined8 *)(pWVar8 + 0x24) = uVar5;
    uVar5 = puVar7[0xb];
    *(undefined8 *)(pWVar8 + 0x28) = puVar7[10];
    *(undefined8 *)(pWVar8 + 0x2c) = uVar5;
    uVar2 = *(undefined4 *)((longlong)puVar7 + 100);
    uVar3 = *(undefined4 *)(puVar7 + 0xd);
    uVar4 = *(undefined4 *)((longlong)puVar7 + 0x6c);
    *(undefined4 *)(pWVar8 + 0x30) = *(undefined4 *)(puVar7 + 0xc);
    *(undefined4 *)(pWVar8 + 0x32) = uVar2;
    *(undefined4 *)(pWVar8 + 0x34) = uVar3;
    *(undefined4 *)(pWVar8 + 0x36) = uVar4;
    puVar1 = puVar7 + 0xe;
    uVar2 = *(undefined4 *)((longlong)puVar7 + 0x74);
    uVar3 = *(undefined4 *)(puVar7 + 0xf);
    uVar4 = *(undefined4 *)((longlong)puVar7 + 0x7c);
    puVar7 = puVar7 + 0x10;
    *(undefined4 *)(pWVar8 + 0x38) = *(undefined4 *)puVar1;
    *(undefined4 *)(pWVar8 + 0x3a) = uVar2;
    *(undefined4 *)(pWVar8 + 0x3c) = uVar3;
    *(undefined4 *)(pWVar8 + 0x3e) = uVar4;
    pWVar8 = pWVar8 + 0x40;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  *(undefined4 *)pWVar8 = *(undefined4 *)puVar7;
                    /* WARNING: Could not recover jumptable at 0x00014000a2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  PathAppendW(param_2,L"dgVoodoo.conf");
  return;
}

