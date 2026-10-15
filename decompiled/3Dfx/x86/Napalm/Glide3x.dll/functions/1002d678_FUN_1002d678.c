/*
 * FUN_1002d678 at 1002d678
 * undefined * __fastcall FUN_1002d678(byte * param_1)
 * Address ranges: 1002d678-1002d6ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined * __fastcall FUN_1002d678(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined *puVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  puVar4 = PTR_s_grGetGammaTableExt_1005737f_1_1005e160;
  do {
    if (puVar4 == (undefined *)0x0) {
      return (undefined *)0x0;
    }
    pbVar5 = (&PTR_s_grGetGammaTableExt_1005737f_1_1005e160)[iVar6 * 3];
    pbVar2 = param_1;
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_1002d6b2:
        uVar3 = -(uint)bVar7 | 1;
        goto LAB_1002d6b7;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_1002d6b2;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_1002d6b7:
    if (uVar3 == 0) {
      uVar3 = (uint)(byte)(&DAT_1005e168)[iVar6 * 0xc];
      puVar4 = FUN_10005411();
      bVar7 = FUN_100051b3(puVar4,uVar3);
      if (!bVar7) {
        return (undefined *)0x0;
      }
      return (&PTR_grGetGammaTableExt_1005e164)[iVar6 * 3];
    }
    iVar6 = iVar6 + 1;
    puVar4 = (&PTR_s_grGetGammaTableExt_1005737f_1_1005e160)[iVar6 * 3];
  } while( true );
}

