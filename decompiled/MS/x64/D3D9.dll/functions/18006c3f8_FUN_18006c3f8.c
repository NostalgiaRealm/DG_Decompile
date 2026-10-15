/*
 * FUN_18006c3f8 at 18006c3f8
 * undefined8 __fastcall FUN_18006c3f8(longlong param_1, uint * param_2, byte * param_3, ulonglong param_4, ulonglong param_5, uint param_6, longlong * param_7, undefined8 * param_8, undefined8 param_9, char param_10, undefined1 param_11)
 * Address ranges: 18006c3f8-18006c54d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18006c3f8(longlong param_1,uint *param_2,byte *param_3,ulonglong param_4,
                       ulonglong param_5,uint param_6,longlong *param_7,undefined8 *param_8,
                       undefined8 param_9,char param_10,undefined1 param_11)

{
  byte *pbVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint *puVar4;
  byte local_5b8 [48];
  uint local_588 [12];
  undefined1 *local_558;
  undefined2 local_550;
  uint local_548;
  undefined8 local_544;
  undefined8 uStack_53c;
  undefined8 local_534;
  undefined7 uStack_52c;
  undefined4 uStack_525;
  undefined1 local_4d0 [64];
  undefined1 local_490;
  undefined1 local_48f;
  undefined1 local_48e;
  byte *local_488;
  
  FUN_1800fbea0((undefined1 *)&local_544,0,0x50c);
  puVar4 = local_588;
  FUN_1800fbea0((undefined1 *)puVar4,0,0x40);
  local_588[0] = param_6;
  local_558 = local_4d0;
  local_550 = 0x40;
  FUN_18006439c(puVar4,(longlong)local_588);
  local_548 = (uint)CONCAT11(param_3[0x126d],param_3[0x126e]);
  uVar2 = (ulonglong)local_548;
  pbVar1 = FUN_18006bbe0(uVar2,local_5b8,param_3,param_4,param_5);
  local_544 = *(undefined8 *)pbVar1;
  uStack_53c = *(undefined8 *)(pbVar1 + 8);
  local_534 = *(undefined8 *)(pbVar1 + 0x10);
  uStack_52c = (undefined7)*(undefined8 *)(pbVar1 + 0x18);
  uStack_525 = *(undefined4 *)(pbVar1 + 0x1f);
  local_490 = 1;
  if ((param_10 != '\0') || (local_48f = 0, param_5 == 0)) {
    local_48f = 1;
  }
  local_48e = param_11;
  local_488 = param_3;
  uVar2 = FUN_180064950(uVar2,param_7,(longlong)local_588);
  if (((char)uVar2 != '\0') &&
     (uVar2 = FUN_18006be08(param_1,param_7,local_588,param_4,param_5,param_2), (char)uVar2 != '\0')
     ) {
    if (*(int *)(param_1 + 8) != 0) {
      pbVar1 = (byte *)(((ulonglong)(param_7[1] - *param_7) >> 1) + *param_7);
      *pbVar1 = *pbVar1 ^ 0x2a;
    }
    FUN_1800edec4(param_7);
    uVar3 = FUN_180065f34(param_7,(longlong)local_588,param_8);
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
  }
  return uVar2 & 0xffffffffffffff00;
}

