/*
 * FUN_100a8f90 at 100a8f90
 * undefined FUN_100a8f90(void)
 * Address ranges: 100a8f90-100a91d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_100a8f90(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6,
            int param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (param_2 != 0) {
    iVar2 = FUN_100ccac8(param_1,param_2);
    if (iVar2 == 0) {
      uVar6 = 0;
      uVar9 = 1;
      uVar8 = 1;
      uVar7 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(iVar2 + 0x18);
      uVar7 = *(undefined4 *)(iVar2 + 0x14);
      uVar9 = *(undefined4 *)(iVar2 + 0x1c);
      uVar8 = *(undefined4 *)(iVar2 + 0x20);
      if (param_6 == 2) {
        param_6 = *(int *)(iVar2 + 0x10);
      }
      if (param_7 == 2) {
        param_7 = *(int *)(iVar2 + 0xc);
      }
    }
    puVar3 = (undefined4 *)FUN_101321c0(200);
    if (puVar3 != (undefined4 *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 4);
      if (param_5 < 4) {
        uVar5 = *(undefined4 *)(param_5 * 4 + 0x101626e8);
      }
      else {
        uVar5 = 0;
      }
      FUN_100b1c98(puVar3,param_1,*(undefined4 *)(param_1 + 0x14),param_3,param_4,uVar5,0,0,0);
      *puVar3 = &PTR_D3DPERF_SetMarker_native_1015f188;
      puVar3[0x22] = &PTR_FUN_1015f14c;
      puVar3[0x24] = uVar1;
      puVar3[0x25] = param_1;
      puVar3[0x26] = uVar7;
      puVar3[0x27] = uVar6;
      puVar3[0x28] = uVar9;
      puVar3[0x29] = uVar8;
      puVar3[0x2a] = param_2;
      *(undefined8 *)(puVar3 + 0x2b) = 0;
      puVar3[0x2d] = param_8;
      puVar3[0x2e] = param_9;
      if (param_5 < 4) {
        uVar6 = *(undefined4 *)(&DAT_101626d8 + param_5 * 4);
      }
      else {
        uVar6 = 0;
      }
      puVar3[0x2f] = uVar6;
      puVar3[0x30] = (uint)(param_7 == 1);
      uVar6 = 2;
      if (param_6 == 1) {
        uVar6 = 3;
      }
      puVar3[0x31] = uVar6;
      puVar3[0x23] = 0;
      uVar4 = FUN_100b1f40(puVar3,param_11);
      if ((uVar4 & 1) != 0) {
        if (puVar3 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        return puVar3 + 0x22;
      }
      FUN_100b1e00(puVar3);
      FUN_10132260(puVar3,200);
    }
  }
  return (undefined4 *)0x0;
}

