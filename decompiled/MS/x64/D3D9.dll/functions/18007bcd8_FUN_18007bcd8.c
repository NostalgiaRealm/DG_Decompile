/*
 * FUN_18007bcd8 at 18007bcd8
 * undefined __fastcall FUN_18007bcd8(ulonglong param_1, longlong param_2, longlong * param_3)
 * Address ranges: 18007bcd8-18007be02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18007bcd8(ulonglong param_1,longlong param_2,longlong *param_3)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong local_res8 [4];
  undefined4 local_48 [10];
  
  uVar7 = 0;
  uVar6 = 0;
  do {
    pcVar1 = (char *)(*(longlong *)(param_2 + 0x10) + 0x4880 + uVar6);
    bVar3 = (byte)uVar6;
    uVar4 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar4;
    uVar7 = (uint)(*pcVar1 != '\0') << (bVar3 & 0x1f) | ~(1 << (bVar3 & 0x1f)) & uVar7;
  } while (uVar4 < 4);
  local_res8[0] = param_1;
  FUN_1800ed5c4((int *)(param_2 + 0x20),param_3,uVar7,&DAT_180102a28,0);
  uVar6 = 0;
  local_res8[0] = local_res8[0] & 0xffffffff00000000;
  do {
    iVar5 = (uint)*(byte *)(uVar6 + 0x4880 + *(longlong *)(param_2 + 0x10)) << 0x1b;
    uVar7 = (uint)uVar6;
    if (iVar5 == 0x10000000) {
      uVar8 = 0;
      iVar5 = 1;
LAB_18007bd86:
      pbVar2 = (byte *)((longlong)local_res8 + ((longlong)(int)uVar7 >> 3));
      *pbVar2 = *pbVar2 | '\x01' << (uVar7 & 7);
      bVar3 = (byte)uVar6;
      if (iVar5 == 1) {
        *(uint *)(param_2 + 0x3c) = *(uint *)(param_2 + 0x3c) | 1 << (bVar3 & 0x1f);
      }
      else if (iVar5 == 2) {
        *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) | 1 << (bVar3 & 0x1f);
      }
      else if (iVar5 == 4) {
        *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) | 1 << (bVar3 & 0x1f);
      }
      local_48[uVar6 * 2] = uVar8;
      local_48[uVar6 * 2 + 1] = 5;
    }
    else {
      if (iVar5 == 0x18000000) {
        uVar8 = 1;
        iVar5 = 2;
        goto LAB_18007bd86;
      }
      if (iVar5 == 0x20000000) {
        uVar8 = 2;
        iVar5 = 4;
        goto LAB_18007bd86;
      }
    }
    uVar6 = (ulonglong)(uVar7 + 1);
    if (3 < uVar7 + 1) {
      FUN_1800ed458((int *)(param_2 + 0x20),param_3,(uint)local_res8[0],0x1801029e0,
                    (longlong)local_48);
      return;
    }
  } while( true );
}

