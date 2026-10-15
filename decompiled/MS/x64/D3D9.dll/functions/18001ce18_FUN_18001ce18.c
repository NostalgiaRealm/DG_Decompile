/*
 * FUN_18001ce18 at 18001ce18
 * undefined __fastcall FUN_18001ce18(longlong param_1, uint param_2)
 * Address ranges: 18001ce18-18001cf31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001ce18(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte *pbVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  undefined4 local_68 [18];
  
  if (9 < (int)param_2) {
    uVar4 = (ulonglong)(param_2 - 10 & 0x3f);
    pbVar3 = (byte *)(param_1 + 0xcf0 + (ulonglong)(param_2 - 10 >> 6) * 8 + ((longlong)uVar4 >> 3))
    ;
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar4 & 7));
  }
  uVar6 = 1;
  if (param_2 == 1) {
    plVar1 = *(longlong **)(param_1 + 0x28);
    lVar2 = *plVar1;
    puVar5 = FUN_18002cfa4(*(longlong *)(param_1 + 0xe10) + 0x40,local_68,param_1 + 0xd88);
    (**(code **)(lVar2 + 0xa8))(plVar1,1,puVar5);
    lVar2 = *(longlong *)(param_1 + 0xe10);
    if ((((*(float *)(lVar2 + 0x70) == 0.0) && (*(float *)(lVar2 + 0x74) == 0.0)) &&
        (*(float *)(lVar2 + 0x78) == 0.0)) && (*(float *)(lVar2 + 0x7c) == 1.0)) {
      uVar6 = 0;
    }
    *(undefined1 *)(param_1 + 0x40d) = uVar6;
  }
  else {
    pbVar3 = (byte *)(param_1 + 0xd20 + (ulonglong)(param_2 >> 6) * 8 +
                     ((longlong)(ulonglong)(param_2 & 0x3f) >> 3));
    *pbVar3 = *pbVar3 | '\x01' << ((ulonglong)(param_2 & 0x3f) & 7);
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0xce0) = 0;
      *(undefined2 *)(param_1 + 0xce4) = 0;
      goto LAB_18001cf1d;
    }
    if (param_2 != 1) {
      if (param_2 != 10) {
        return;
      }
      *(undefined1 *)(param_1 + 0xce0) = 0;
      *(undefined2 *)(param_1 + 0xce2) = 0;
      *(undefined1 *)(param_1 + 0x411) = 0;
      goto LAB_18001cf1d;
    }
  }
  *(undefined2 *)(param_1 + 0xce2) = 0;
  *(undefined1 *)(param_1 + 0xce1) = 0;
LAB_18001cf1d:
  *(undefined1 *)(param_1 + 0xce6) = 0;
  *(undefined1 *)(param_1 + 0xce8) = 0;
  return;
}

