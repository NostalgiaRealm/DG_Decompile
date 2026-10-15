/*
 * FUN_100cf4d0 at 100cf4d0
 * undefined FUN_100cf4d0(void)
 * Address ranges: 100cf4d0-100cf963
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 *
FUN_100cf4d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,char param_7,undefined8 *param_8,ulonglong *param_9)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulonglong uVar11;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uStack_48 = param_8[1];
  local_50 = *param_8;
  uVar11 = *param_9;
  iVar8 = FUN_101321c0(0xc314);
  puVar3 = (undefined4 *)(iVar8 + 0x13U & 0xfffffff0);
  puVar3[-1] = iVar8;
  puVar2 = (undefined8 *)(puVar3 + 0x19ae);
  *puVar2 = 0;
  puVar3[0x19b0] = 0;
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = puVar3 + 0x19ad;
  }
  puVar3[0x19b1] = puVar4;
  *(undefined8 *)(puVar3 + 0x19b4) = 0;
  *(undefined8 *)(puVar3 + 0x19b2) = 0;
  *(undefined8 *)(puVar3 + 0x19b8) = 0;
  *(undefined8 *)(puVar3 + 0x19b6) = 0;
  *(undefined8 *)(puVar3 + 0x19bc) = 0;
  *(undefined8 *)(puVar3 + 0x19ba) = 0;
  FUN_1000cc30(puVar3,param_1,param_2,param_3,param_4,param_5,param_6,param_7,&local_50);
  puVar3[0x19be] = param_1;
  *(undefined8 *)(puVar3 + 0x19aa) = 0;
  puVar3[0x19ac] = 0;
  *puVar3 = &PTR_FUN_1015fad8;
  puVar3[0x19a9] = &PTR_FUN_1015e680;
  puVar3[0x19ad] = &PTR_FUN_1015f8c0;
  *(ulonglong *)(puVar3 + 0x19bf) = uVar11;
  *(undefined8 *)(puVar3 + 0x19c6) = 0;
  *(undefined8 *)(puVar3 + 0x19c8) = 0;
  puVar3[0x19ca] = puVar3;
  *(undefined8 *)(puVar3 + 0x19cb) = 0;
  *(undefined8 *)(puVar3 + 0x19cd) = 0;
  *(undefined8 *)(puVar3 + 0x19cf) = 0;
  *(undefined8 *)(puVar3 + 0x19d1) = 0;
  *(undefined8 *)(puVar3 + 0x19d3) = 0x10001;
  *(undefined8 *)(puVar3 + 0x19d5) = 0;
  puVar3[0x19d7] = 0;
  puVar3[0x19d8] = puVar3;
  *(undefined8 *)(puVar3 + 0x19d9) = 0;
  *(undefined8 *)(puVar3 + 0x19db) = 0;
  uVar9 = FUN_101322b0(0x200);
  puVar3[0x19dd] = uVar9;
  *(undefined8 *)(puVar3 + 0x19de) = 0x20;
  puVar3[0x19e0] = puVar3;
  *(undefined8 *)(puVar3 + 0x30b4) = 0;
  *(undefined8 *)(puVar3 + 0x19e1) = 0;
  *(undefined8 *)(puVar3 + 0x19e3) = 0;
  *(undefined8 *)(puVar3 + 0x19e5) = 0;
  *(undefined8 *)(puVar3 + 0x19e7) = 0;
  puVar3[0x19e9] = 0;
  *(undefined8 *)(puVar3 + 0x30a0) = 0;
  *(undefined8 *)(puVar3 + 0x30a2) = 0;
  *(undefined8 *)(puVar3 + 0x30b9) = 3;
  puVar3[0x30bb] = 0x1010100;
  *(undefined1 *)(puVar3 + 0x30bc) = 1;
  FUN_100d1450(puVar2,&DAT_1015e670);
  FUN_100d1450(puVar2,&DAT_1015e450);
  if ((uVar11 >> 0x20 & 0xff) != 0) {
    FUN_100d1450(puVar2,&DAT_1015e540);
  }
  piVar1 = (int *)(param_1 + 0x78);
  do {
    cVar5 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
    if (bVar7) {
      *piVar1 = *piVar1 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  DataMemoryBarrier(2,3);
  puVar3[1] = &DAT_10170200;
  puVar3[2] = &DAT_10170890;
  puVar3[0x19c2] = &DAT_10170a20;
  iVar8 = FUN_10004ff0(param_1,param_3);
  puVar3[0x19c1] = iVar8;
  uVar6 = *(uint *)(iVar8 + 0x24) >> 0x14 & 1;
  *(char *)((int)puVar3 + 0x3c7) = (char)uVar6;
  *(bool *)(puVar3 + 0xf2) = param_7 != '\0' && uVar6 != 0;
  bVar7 = (puVar3[0x374] & 0x40) == 0;
  if (bVar7) {
    uVar9 = 0x2000;
  }
  else {
    uVar9 = puVar3[0x375];
  }
  uVar10 = 0x10;
  if (bVar7) {
    uVar10 = 0x800;
  }
  puVar3[0x19c5] = uVar10;
  puVar3[0x19c3] = uVar9;
  puVar3[0x19c4] = uVar10;
  (*(code *)PTR_FUN_1016c270)(puVar3 + 0x1b60);
  *(undefined8 *)(puVar3 + 0x19ec) = 0;
  *(undefined8 *)(puVar3 + 0x19ea) = 0;
  *(undefined8 *)(puVar3 + 0x19f0) = 0;
  *(undefined8 *)(puVar3 + 0x19ee) = 0;
  *(undefined8 *)(puVar3 + 0x19f4) = 0;
  *(undefined8 *)(puVar3 + 0x19f2) = 0;
  *(undefined8 *)(puVar3 + 0x19f8) = 0;
  *(undefined8 *)(puVar3 + 0x19f6) = 0;
  *(undefined8 *)(puVar3 + 0x19fc) = 0;
  *(undefined8 *)(puVar3 + 0x19fa) = 0;
  *(undefined8 *)(puVar3 + 0x1a00) = 0;
  *(undefined8 *)(puVar3 + 0x19fe) = 0;
  *(undefined8 *)(puVar3 + 0x1a04) = 0;
  *(undefined8 *)(puVar3 + 0x1a02) = 0;
  *(undefined8 *)(puVar3 + 0x1a08) = 0;
  *(undefined8 *)(puVar3 + 0x1a06) = 0;
  *(undefined8 *)(puVar3 + 0x1a0c) = 0;
  *(undefined8 *)(puVar3 + 0x1a0a) = 0;
  *(undefined8 *)(puVar3 + 0x1a10) = 0;
  *(undefined8 *)(puVar3 + 0x1a0e) = 0;
  *(undefined8 *)(puVar3 + 0x1a14) = 0;
  *(undefined8 *)(puVar3 + 0x1a12) = 0;
  *(undefined8 *)(puVar3 + 0x1a18) = 0;
  *(undefined8 *)(puVar3 + 0x1a16) = 0;
  *(undefined8 *)(puVar3 + 0x1a1c) = 0;
  *(undefined8 *)(puVar3 + 0x1a1a) = 0;
  *(undefined8 *)(puVar3 + 0x1a20) = 0;
  *(undefined8 *)(puVar3 + 0x1a1e) = 0;
  *(undefined8 *)(puVar3 + 0x1a24) = 0;
  *(undefined8 *)(puVar3 + 0x1a22) = 0;
  *(undefined8 *)(puVar3 + 0x1a28) = 0;
  *(undefined8 *)(puVar3 + 0x1a26) = 0;
  *(undefined8 *)(puVar3 + 0x1a2c) = 0;
  *(undefined8 *)(puVar3 + 0x1a2a) = 0;
  *(undefined8 *)(puVar3 + 0x1a30) = 0;
  *(undefined8 *)(puVar3 + 0x1a2e) = 0;
  *(undefined8 *)(puVar3 + 0x1a34) = 0;
  *(undefined8 *)(puVar3 + 0x1a32) = 0;
  *(undefined8 *)(puVar3 + 0x1a38) = 0;
  *(undefined8 *)(puVar3 + 0x1a36) = 0;
  *(undefined8 *)(puVar3 + 0x30b6) = 0;
  puVar3[0x30b8] = 0;
  FUN_101325d0(puVar3 + 0x1b64,0,0x45a0);
  FUN_101325d0(puVar3 + 0x2ccc,0,0xe00);
  *(undefined8 *)(puVar3 + 0x304e) = 0;
  *(undefined8 *)(puVar3 + 0x304c) = 0;
  *(undefined8 *)(puVar3 + 0x3052) = 0;
  *(undefined8 *)(puVar3 + 0x3050) = 0;
  *(undefined8 *)(puVar3 + 0x3056) = 0;
  *(undefined8 *)(puVar3 + 0x3054) = 0;
  *(undefined8 *)(puVar3 + 0x305a) = 0;
  *(undefined8 *)(puVar3 + 0x3058) = 0;
  *(undefined8 *)(puVar3 + 0x305e) = 0;
  *(undefined8 *)(puVar3 + 0x305c) = 0;
  *(undefined8 *)(puVar3 + 0x3062) = 0;
  *(undefined8 *)(puVar3 + 0x3060) = 0;
  *(undefined8 *)(puVar3 + 0x3066) = 0;
  *(undefined8 *)(puVar3 + 0x3064) = 0;
  *(undefined8 *)(puVar3 + 0x306a) = 0;
  *(undefined8 *)(puVar3 + 0x3068) = 0;
  *(undefined8 *)(puVar3 + 0x306e) = 0;
  *(undefined8 *)(puVar3 + 0x306c) = 0;
  *(undefined8 *)(puVar3 + 0x3072) = 0;
  *(undefined8 *)(puVar3 + 0x3070) = 0;
  *(undefined8 *)(puVar3 + 0x3076) = 0;
  *(undefined8 *)(puVar3 + 0x3074) = 0;
  *(undefined8 *)(puVar3 + 0x307a) = 0;
  *(undefined8 *)(puVar3 + 0x3078) = 0;
  *(undefined8 *)(puVar3 + 0x307e) = 0;
  *(undefined8 *)(puVar3 + 0x307c) = 0;
  *(undefined8 *)(puVar3 + 0x3082) = 0;
  *(undefined8 *)(puVar3 + 0x3080) = 0;
  *(undefined8 *)(puVar3 + 0x3086) = 0;
  *(undefined8 *)(puVar3 + 0x3084) = 0;
  *(undefined8 *)(puVar3 + 0x308a) = 0;
  *(undefined8 *)(puVar3 + 0x3088) = 0;
  *(undefined8 *)(puVar3 + 0x308e) = 0;
  *(undefined8 *)(puVar3 + 0x308c) = 0;
  *(undefined8 *)(puVar3 + 0x3092) = 0;
  *(undefined8 *)(puVar3 + 0x3090) = 0;
  *(undefined8 *)(puVar3 + 0x3096) = 0;
  *(undefined8 *)(puVar3 + 0x3094) = 0;
  *(undefined8 *)(puVar3 + 0x309a) = 0;
  *(undefined8 *)(puVar3 + 0x3098) = 0;
  *(undefined8 *)(puVar3 + 0x309e) = 0;
  *(undefined8 *)(puVar3 + 0x309c) = 0;
  *(undefined8 *)(puVar3 + 0x4a8) = 0;
  *(undefined8 *)(puVar3 + 0x4a6) = 0;
  puVar3[0x4aa] = 0;
  *(undefined8 *)(puVar3 + 0x30a6) = 0x100000001;
  *(undefined8 *)(puVar3 + 0x30a4) = 0x100000001;
  *(undefined8 *)(puVar3 + 0x30aa) = 0x100000001;
  *(undefined8 *)(puVar3 + 0x30a8) = 0x100000001;
  *(undefined8 *)(puVar3 + 0x30ae) = 0x100000001;
  *(undefined8 *)(puVar3 + 0x30ac) = 0x100000001;
  *(undefined8 *)(puVar3 + 0x30b2) = 0x100000001;
  *(undefined8 *)(puVar3 + 0x30b0) = 0x100000001;
  return puVar3;
}

