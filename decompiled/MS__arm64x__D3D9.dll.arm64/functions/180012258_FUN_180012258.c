/*
 * FUN_180012258 at 180012258
 * undefined FUN_180012258(void)
 * Address ranges: 180012258-18001231f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180012258(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 extraout_w15;
  undefined1 extraout_w15_00;
  undefined1 extraout_w15_01;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_40 [64];
  
  if (*(char *)(param_1 + 0xce3) == '\0') {
    lVar3 = 0x85c0;
    if (*(char *)(param_1 + 0xce2) == '\0') {
      lVar4 = 0x8540;
      if (*(char *)(param_1 + 0xce0) == '\0') {
        puVar1 = (undefined8 *)FUN_18001ef50(*(longlong *)(param_1 + 0xe10) + 0x280,auStack_40);
        uVar7 = *puVar1;
        uVar6 = puVar1[3];
        uVar5 = puVar1[2];
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xe10) + lVar4);
        puVar2[1] = puVar1[1];
        *puVar2 = uVar7;
        puVar2[3] = uVar6;
        puVar2[2] = uVar5;
        uVar7 = puVar1[4];
        uVar6 = puVar1[7];
        uVar5 = puVar1[6];
        puVar2[5] = puVar1[5];
        puVar2[4] = uVar7;
        puVar2[7] = uVar6;
        puVar2[6] = uVar5;
        *(undefined1 *)(param_1 + 0xce0) = extraout_w15;
      }
      puVar1 = (undefined8 *)
               FUN_18001ef50(*(longlong *)(param_1 + 0xe10) + lVar4,auStack_40,
                             *(longlong *)(param_1 + 0xe10) + 0x40);
      uVar7 = *puVar1;
      uVar6 = puVar1[3];
      uVar5 = puVar1[2];
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xe10) + lVar3);
      puVar2[1] = puVar1[1];
      *puVar2 = uVar7;
      puVar2[3] = uVar6;
      puVar2[2] = uVar5;
      uVar7 = puVar1[4];
      uVar6 = puVar1[7];
      uVar5 = puVar1[6];
      puVar2[5] = puVar1[5];
      puVar2[4] = uVar7;
      puVar2[7] = uVar6;
      puVar2[6] = uVar5;
      *(undefined1 *)(param_1 + 0xce2) = extraout_w15_00;
    }
    puVar2 = (undefined8 *)
             FUN_18001ef50(*(longlong *)(param_1 + 0xe10) + lVar3,auStack_40,param_1 + 0xd88);
    lVar3 = *(longlong *)(param_1 + 0xe10);
    uVar7 = *puVar2;
    uVar6 = puVar2[3];
    uVar5 = puVar2[2];
    *(undefined8 *)(lVar3 + 0x8608) = puVar2[1];
    *(undefined8 *)(lVar3 + 0x8600) = uVar7;
    *(undefined8 *)(lVar3 + 0x8618) = uVar6;
    *(undefined8 *)(lVar3 + 0x8610) = uVar5;
    uVar7 = puVar2[4];
    uVar6 = puVar2[7];
    uVar5 = puVar2[6];
    *(undefined8 *)(lVar3 + 0x8628) = puVar2[5];
    *(undefined8 *)(lVar3 + 0x8620) = uVar7;
    *(undefined8 *)(lVar3 + 0x8638) = uVar6;
    *(undefined8 *)(lVar3 + 0x8630) = uVar5;
    *(undefined1 *)(param_1 + 0xce3) = extraout_w15_01;
  }
  return;
}

