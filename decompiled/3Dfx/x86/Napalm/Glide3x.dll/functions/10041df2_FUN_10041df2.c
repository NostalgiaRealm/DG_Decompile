/*
 * FUN_10041df2 at 10041df2
 * uint __thiscall FUN_10041df2(void * this, byte * param_1, uint param_2)
 * Address ranges: 10041df2-10041edd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __thiscall FUN_10041df2(void *this,byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint local_c;
  
  uVar1 = *(uint *)((int)this + 0x10);
  uVar5 = -(uint)((*param_1 & 1) != 0);
  uVar7 = 0;
  if (uVar1 != 0) {
    puVar3 = (uint *)(param_1 + (uVar1 >> 3));
    do {
      if (uVar5 == 0xffffffff) {
        uVar5 = uVar7 & 0xffffffe0;
        uVar4 = -1 << ((byte)uVar7 & 0x1f);
        for (puVar6 = (uint *)(param_1 + (uVar7 >> 5) * 4); puVar6 < puVar3; puVar6 = puVar6 + 1) {
          uVar4 = ~*puVar6 & uVar4;
          iVar2 = 0;
          if (uVar4 != 0) {
            for (; (uVar4 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
            }
          }
          if (uVar4 != 0) {
            uVar5 = uVar5 + iVar2;
            break;
          }
          uVar5 = uVar5 + 0x20;
          uVar4 = 0xffffffff;
        }
      }
      else {
        uVar7 = uVar5 & 0xffffffe0;
        puVar6 = (uint *)(param_1 + (uVar5 >> 5) * 4);
        local_c = -1 << ((byte)uVar5 & 0x1f);
        if (puVar6 < puVar3) {
          while( true ) {
            local_c = *puVar6 & local_c;
            iVar2 = 0;
            if (local_c != 0) {
              for (; (local_c >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
              }
            }
            if (local_c != 0) break;
            uVar7 = uVar7 + 0x20;
            local_c = 0xffffffff;
            if ((uVar1 < uVar7 - uVar5) || (puVar6 = puVar6 + 1, puVar3 <= puVar6))
            goto LAB_10041e76;
          }
          uVar7 = uVar7 + iVar2;
        }
LAB_10041e76:
        if (param_2 <= uVar7 - uVar5) {
          return uVar5;
        }
        uVar5 = 0xffffffff;
      }
    } while (uVar7 < uVar1);
  }
  return 0xffffffff;
}

