/*
 * FUN_180057ccc at 180057ccc
 * undefined __fastcall FUN_180057ccc(longlong param_1, longlong param_2, longlong param_3)
 * Address ranges: 180057ccc-180057d99
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180057ccc(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte local_828 [8];
  uint auStack_820 [510];
  
  uVar2 = *(uint *)(param_2 + 8);
  uVar4 = 0;
  uVar7 = 0;
  if (uVar2 != 0) {
    do {
      uVar6 = (ulonglong)*(byte *)(param_2 + 0x214 + uVar7);
      bVar1 = *(byte *)(param_2 + 0x19 + uVar6 * 8);
      uVar4 = (uint)bVar1;
      uVar8 = uVar7;
      pcVar3 = FUN_180088d0c(bVar1);
      *(char **)(local_828 + uVar7 * 0x20) = pcVar3;
      bVar1 = *(byte *)(param_2 + 0x18 + uVar6 * 8);
      auStack_820[uVar7 * 8] = uVar4 & 0xf;
      uVar4 = (uint)*(char *)(param_2 + 0x14 + uVar6 * 8);
      auStack_820[uVar7 * 8 + 1] = *(uint *)(&DAT_180102670 + (ulonglong)bVar1 * 4);
      bVar1 = *(byte *)(param_2 + 0x17 + uVar6 * 8);
      auStack_820[uVar7 * 8 + 2] = uVar4;
      auStack_820[uVar7 * 8 + 3] = (uint)bVar1 << 2;
      if (param_3 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint *)(param_3 + (ulonglong)uVar4 * 4);
      }
      uVar4 = (int)uVar8 + 1;
      auStack_820[uVar7 * 8 + 4] = (uint)(uVar5 != 0);
      auStack_820[uVar7 * 8 + 5] = uVar5;
      uVar7 = (ulonglong)uVar4;
    } while (uVar4 < uVar2);
  }
  FUN_1800e6780((longlong *)
                ((ulonglong)*(uint *)(param_1 + 0x10) * 0x1ac0 + *(longlong *)(param_1 + 8) + 0x22c0
                ),local_828,uVar4);
  return;
}

