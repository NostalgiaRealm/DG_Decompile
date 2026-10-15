/*
 * FUN_10058633 at 10058633
 * uint __stdcall FUN_10058633(int param_1, byte * param_2, int param_3, uint param_4)
 * Address ranges: 10058633-1005882e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10058633(int param_1,byte *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint local_8;
  
  local_8 = 0xffffffff;
  uVar4 = -(uint)((*param_2 & 1) != 0);
  uVar3 = 0;
LAB_1005866e:
  if (((uVar4 != 0xffffffff) && ((uint)(param_3 << 3) <= uVar4)) || (local_8 != 0xffffffff)) {
    return local_8;
  }
  if (uVar4 == 0xffffffff) goto LAB_100587dc;
  uVar6 = -1 << ((byte)uVar4 & 0x1f);
  uVar3 = uVar4 & 0xffffffe0;
  for (puVar5 = (uint *)(param_2 + (uVar4 >> 5) * 4); puVar5 < param_2 + param_3;
      puVar5 = puVar5 + 1) {
    uVar6 = *puVar5 & uVar6;
    iVar1 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    if (uVar6 != 0) {
      uVar3 = uVar3 + iVar1;
      break;
    }
    uVar3 = uVar3 + 0x20;
    uVar6 = 0xffffffff;
  }
  if (param_4 + 0x1f >> 5 <= uVar3 - uVar4) {
    uVar7 = uVar4 << 5;
    uVar6 = uVar7;
    if ((*(byte *)(param_1 + uVar4 * 4) & 1) != 0) {
      uVar6 = 0xffffffff;
    }
    puVar5 = (uint *)(param_1 + uVar3 * 4);
LAB_10058703:
    do {
      if (uVar6 == 0xffffffff) {
        uVar4 = -1 << ((byte)uVar7 & 0x1f);
        uVar6 = uVar7 & 0xffffffe0;
        for (puVar2 = (uint *)(param_1 + (uVar7 >> 5) * 4); puVar2 < puVar5; puVar2 = puVar2 + 1) {
          uVar4 = ~*puVar2 & uVar4;
          iVar1 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
            }
          }
          if (uVar4 != 0) {
            uVar6 = uVar6 + iVar1;
            break;
          }
          uVar6 = uVar6 + 0x20;
          uVar4 = 0xffffffff;
        }
        goto LAB_10058703;
      }
      if (uVar3 << 5 <= uVar6) break;
      uVar4 = -1 << ((byte)uVar6 & 0x1f);
      uVar7 = uVar6 & 0xffffffe0;
      for (puVar2 = (uint *)(param_1 + (uVar6 >> 5) * 4); puVar2 < puVar5; puVar2 = puVar2 + 1) {
        uVar4 = *puVar2 & uVar4;
        iVar1 = 0;
        if (uVar4 != 0) {
          for (; (uVar4 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
          }
        }
        if (uVar4 != 0) {
          uVar7 = uVar7 + iVar1;
          break;
        }
        uVar7 = uVar7 + 0x20;
        uVar4 = 0xffffffff;
        if ((param_4 != 0) && (param_4 < uVar7 - uVar6)) break;
      }
      if (param_4 <= uVar7 - uVar6) goto LAB_100587b7;
      uVar6 = 0xffffffff;
    } while( true );
  }
  goto LAB_100587d7;
LAB_100587dc:
  uVar6 = -1 << ((byte)uVar3 & 0x1f);
  uVar4 = uVar3 & 0xffffffe0;
  for (puVar5 = (uint *)(param_2 + (uVar3 >> 5) * 4); puVar5 < param_2 + param_3;
      puVar5 = puVar5 + 1) {
    uVar6 = ~*puVar5 & uVar6;
    iVar1 = 0;
    if (uVar6 != 0) {
      for (; (uVar6 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    if (uVar6 != 0) {
      uVar4 = uVar4 + iVar1;
      break;
    }
    uVar4 = uVar4 + 0x20;
    uVar6 = 0xffffffff;
  }
  goto LAB_1005866e;
LAB_100587b7:
  FUN_10058439(param_1,(int)param_2,uVar6,uVar6 + param_4);
  local_8 = uVar6;
LAB_100587d7:
  uVar4 = 0xffffffff;
  goto LAB_1005866e;
}

