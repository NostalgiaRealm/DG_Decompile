/*
 * FUN_18011e048 at 18011e048
 * undefined FUN_18011e048(void)
 * Address ranges: 18011e048-18011e10f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18011e048(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_40 [64];
  
  if (*(char *)(param_1 + 0xce3) == '\0') {
    uVar4 = 1;
    lVar5 = 0x85c0;
    if (*(char *)(param_1 + 0xce2) == '\0') {
      lVar3 = 0x8540;
      uVar4 = 1;
      if (*(char *)(param_1 + 0xce0) == '\0') {
        uVar4 = 1;
        puVar1 = (undefined8 *)FUN_18012b0f8(*(longlong *)(param_1 + 0xe10) + 0x280,auStack_40);
        uVar6 = *puVar1;
        uVar8 = puVar1[3];
        uVar7 = puVar1[2];
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xe10) + lVar3);
        puVar2[1] = puVar1[1];
        *puVar2 = uVar6;
        puVar2[3] = uVar8;
        puVar2[2] = uVar7;
        uVar6 = puVar1[4];
        uVar8 = puVar1[7];
        uVar7 = puVar1[6];
        puVar2[5] = puVar1[5];
        puVar2[4] = uVar6;
        puVar2[7] = uVar8;
        puVar2[6] = uVar7;
        *(undefined1 *)(param_1 + 0xce0) = uVar4;
      }
      puVar1 = (undefined8 *)
               FUN_18012b0f8(*(longlong *)(param_1 + 0xe10) + lVar3,auStack_40,
                             *(longlong *)(param_1 + 0xe10) + 0x40);
      uVar6 = *puVar1;
      uVar8 = puVar1[3];
      uVar7 = puVar1[2];
      puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0xe10) + lVar5);
      puVar2[1] = puVar1[1];
      *puVar2 = uVar6;
      puVar2[3] = uVar8;
      puVar2[2] = uVar7;
      uVar6 = puVar1[4];
      uVar8 = puVar1[7];
      uVar7 = puVar1[6];
      puVar2[5] = puVar1[5];
      puVar2[4] = uVar6;
      puVar2[7] = uVar8;
      puVar2[6] = uVar7;
      *(undefined1 *)(param_1 + 0xce2) = uVar4;
    }
    puVar2 = (undefined8 *)
             FUN_18012b0f8(*(longlong *)(param_1 + 0xe10) + lVar5,auStack_40,param_1 + 0xd88);
    lVar5 = *(longlong *)(param_1 + 0xe10);
    uVar6 = *puVar2;
    uVar8 = puVar2[3];
    uVar7 = puVar2[2];
    *(undefined8 *)(lVar5 + 0x8608) = puVar2[1];
    *(undefined8 *)(lVar5 + 0x8600) = uVar6;
    *(undefined8 *)(lVar5 + 0x8618) = uVar8;
    *(undefined8 *)(lVar5 + 0x8610) = uVar7;
    uVar6 = puVar2[4];
    uVar8 = puVar2[7];
    uVar7 = puVar2[6];
    *(undefined8 *)(lVar5 + 0x8628) = puVar2[5];
    *(undefined8 *)(lVar5 + 0x8620) = uVar6;
    *(undefined8 *)(lVar5 + 0x8638) = uVar8;
    *(undefined8 *)(lVar5 + 0x8630) = uVar7;
    *(undefined1 *)(param_1 + 0xce3) = uVar4;
  }
  return;
}

