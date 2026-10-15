/*
 * FUN_180057c58 at 180057c58
 * undefined __cdecl FUN_180057c58(longlong * param_1, undefined4 param_2, uint * param_3, uint * param_4, uint * param_5, uint * param_6)
 * Address ranges: 180057c58-180057df3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057c58(longlong *param_1,undefined4 param_2,uint *param_3,uint *param_4,uint *param_5,
                  uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  if ((char)param_1[3] != '\0') {
    if (param_3 == (uint *)0x0) {
      param_3 = &DAT_180066f08;
    }
    if (param_4 == (uint *)0x0) {
      param_4 = &DAT_180066f08;
    }
    if (param_5 == (uint *)0x0) {
      param_5 = &DAT_180066f08;
    }
    if (param_6 == (uint *)0x0) {
      param_6 = &DAT_180066f08;
    }
    uVar7 = (ulonglong)(*param_3 + *param_4 + *param_5 + *param_6 + 1);
    if ((ulonglong)param_1[2] < (param_1[1] - *param_1) + uVar7 * 4) {
      FUN_180057ae0(param_1,uVar7 << 2);
    }
    puVar6 = (undefined4 *)param_1[1];
    *puVar6 = param_2;
    uVar1 = *param_3;
    puVar4 = param_3 + 1;
    puVar5 = puVar6 + 1;
    for (uVar2 = uVar1 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined8 *)puVar5 = *(undefined8 *)puVar4;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 2;
    }
    if ((uVar1 & 1) != 0) {
      *puVar5 = *puVar4;
    }
    uVar1 = *param_3;
    uVar2 = *param_4;
    puVar4 = param_4 + 1;
    puVar5 = puVar6 + (ulonglong)uVar1 + 1;
    for (uVar3 = uVar2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined8 *)puVar5 = *(undefined8 *)puVar4;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 2;
    }
    if ((uVar2 & 1) != 0) {
      *puVar5 = *puVar4;
    }
    uVar2 = *param_5;
    uVar1 = *param_4 + uVar1;
    puVar4 = param_5 + 1;
    puVar5 = puVar6 + (ulonglong)uVar1 + 1;
    for (uVar3 = uVar2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined8 *)puVar5 = *(undefined8 *)puVar4;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 2;
    }
    if ((uVar2 & 1) != 0) {
      *puVar5 = *puVar4;
    }
    uVar2 = *param_6;
    puVar4 = param_6 + 1;
    puVar5 = puVar6 + (ulonglong)(*param_5 + uVar1) + 1;
    for (uVar3 = uVar2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined8 *)puVar5 = *(undefined8 *)puVar4;
      puVar4 = puVar4 + 2;
      puVar5 = puVar5 + 2;
    }
    if ((uVar2 & 1) != 0) {
      *puVar5 = *puVar4;
    }
    param_1[1] = param_1[1] + uVar7 * 4;
  }
  return;
}

