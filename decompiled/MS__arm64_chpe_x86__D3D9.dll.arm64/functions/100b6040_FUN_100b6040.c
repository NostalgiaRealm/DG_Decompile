/*
 * FUN_100b6040 at 100b6040
 * undefined FUN_100b6040(void)
 * Address ranges: 100b6040-100b629b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_100b6040(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,int param_6,
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
    puVar3 = (undefined4 *)FUN_101321c0(0x108);
    if (puVar3 != (undefined4 *)0x0) {
      uVar1 = *(undefined4 *)(param_1 + 4);
      if (param_5 < 4) {
        uVar5 = *(undefined4 *)(param_5 * 4 + 0x101626e8);
      }
      else {
        uVar5 = 0;
      }
      FUN_100c3ed8(puVar3,param_1,*(undefined4 *)(param_1 + 0x14),param_3,param_4,uVar5,0,0,0);
      *puVar3 = &PTR_D3DPERF_SetMarker_native_1015f570;
      puVar3[0x30] = &PTR_FUN_1015f534;
      puVar3[0x32] = uVar1;
      puVar3[0x33] = param_1;
      puVar3[0x34] = uVar7;
      puVar3[0x35] = uVar6;
      puVar3[0x36] = uVar9;
      puVar3[0x37] = uVar8;
      puVar3[0x38] = param_2;
      *(undefined8 *)(puVar3 + 0x39) = 0;
      puVar3[0x3b] = param_3;
      puVar3[0x3c] = param_4;
      puVar3[0x3d] = param_8;
      puVar3[0x3e] = param_9;
      if (param_5 < 4) {
        uVar6 = *(undefined4 *)(&DAT_101626d8 + param_5 * 4);
      }
      else {
        uVar6 = 0;
      }
      puVar3[0x3f] = uVar6;
      puVar3[0x40] = (uint)(param_7 == 1);
      uVar6 = 2;
      if (param_6 == 1) {
        uVar6 = 3;
      }
      puVar3[0x41] = uVar6;
      puVar3[0x31] = 0;
      uVar4 = FUN_100c4210(puVar3,param_11);
      if ((uVar4 & 1) != 0) {
        if (puVar3 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        return puVar3 + 0x30;
      }
      FUN_100c4080(puVar3);
      FUN_10132260(puVar3,0x108);
    }
  }
  return (undefined4 *)0x0;
}

