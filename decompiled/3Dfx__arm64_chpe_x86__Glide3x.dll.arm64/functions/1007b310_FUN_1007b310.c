/*
 * FUN_1007b310 at 1007b310
 * undefined FUN_1007b310(void)
 * Address ranges: 1007b310-1007b63b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1007b310(undefined8 param_1,int param_2,byte *param_3,int param_4,uint param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar3 = 0xffffffff;
  uVar8 = 0;
  uVar4 = -(uint)((*param_3 & 1) != 0);
LAB_1007b340:
  do {
    if (((uVar4 != 0xffffffff) && ((uint)(param_4 << 3) <= uVar4)) || (uVar3 != 0xffffffff)) {
      return uVar3;
    }
    if (uVar4 != 0xffffffff) {
      uVar5 = -1 << (ulonglong)(uVar4 & 0x1f);
      uVar6 = uVar4 & 0xffffffe0;
      for (puVar1 = (uint *)(param_3 + (uVar4 >> 5) * 4); puVar1 < param_3 + param_4;
          puVar1 = puVar1 + 1) {
        uVar5 = (*puVar1 & uVar5 & 0xaaaaaaaa) >> 1 | (*puVar1 & uVar5 & 0x55555555) << 1;
        uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        uVar5 = (uint)LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
        if ((1 - (uVar5 >> 5) & 0xff) != 0) {
          uVar6 = uVar5 + uVar6;
          break;
        }
        uVar6 = uVar6 + 0x20;
        uVar5 = 0xffffffff;
      }
      uVar8 = (ulonglong)uVar6;
      if (param_5 + 0x1f >> 5 <= uVar6 - uVar4) {
        uVar5 = uVar4 << 5;
        uVar7 = uVar5;
        if ((*(byte *)(param_2 + uVar4 * 4) & 1) != 0) {
          uVar7 = 0xffffffff;
        }
LAB_1007b3dc:
        do {
          if ((uVar7 != 0xffffffff) && (uVar6 << 5 <= uVar7)) break;
          puVar1 = (uint *)(param_2 + uVar6 * 4);
          if (uVar7 == 0xffffffff) {
            uVar4 = -1 << (ulonglong)(uVar5 & 0x1f);
            uVar7 = uVar5 & 0xffffffe0;
            for (puVar2 = (uint *)(param_2 + (uVar5 >> 5) * 4); puVar2 < puVar1; puVar2 = puVar2 + 1
                ) {
              uVar4 = uVar4 & (*puVar2 ^ 0xffffffff);
              uVar4 = (uVar4 & 0xaaaaaaaa) >> 1 | (uVar4 & 0x55555555) << 1;
              uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
              uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
              uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
              uVar4 = (uint)LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
              if ((1 - (uVar4 >> 5) & 0xff) != 0) {
                uVar7 = uVar4 + uVar7;
                break;
              }
              uVar7 = uVar7 + 0x20;
              uVar4 = 0xffffffff;
            }
            goto LAB_1007b3dc;
          }
          uVar4 = -1 << (ulonglong)(uVar7 & 0x1f);
          uVar5 = uVar7 & 0xffffffe0;
          for (puVar2 = (uint *)(param_2 + (uVar7 >> 5) * 4); puVar2 < puVar1; puVar2 = puVar2 + 1)
          {
            uVar4 = (*puVar2 & uVar4 & 0xaaaaaaaa) >> 1 | (*puVar2 & uVar4 & 0x55555555) << 1;
            uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
            uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
            uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
            uVar4 = (uint)LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
            if ((1 - (uVar4 >> 5) & 0xff) != 0) {
              uVar5 = uVar4 + uVar5;
              break;
            }
            uVar5 = uVar5 + 0x20;
            if ((param_5 != 0) && (param_5 < uVar5 - uVar7)) break;
            uVar4 = 0xffffffff;
          }
          if (param_5 <= uVar5 - uVar7) goto LAB_1007b4bc;
          uVar7 = 0xffffffff;
        } while( true );
      }
      goto LAB_1007b5d4;
    }
    uVar6 = -1 << (ulonglong)((uint)uVar8 & 0x1f);
    uVar4 = (uint)uVar8 & 0xffffffe0;
    for (puVar1 = (uint *)(param_3 + (int)(uVar8 >> 5) * 4); puVar1 < param_3 + param_4;
        puVar1 = puVar1 + 1) {
      uVar6 = uVar6 & (*puVar1 ^ 0xffffffff);
      uVar6 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
      uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      uVar6 = (uint)LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
      if ((1 - (uVar6 >> 5) & 0xff) != 0) {
        uVar4 = uVar6 + uVar4;
        break;
      }
      uVar4 = uVar4 + 0x20;
      uVar6 = 0xffffffff;
    }
  } while( true );
LAB_1007b4bc:
  uVar4 = uVar7 + param_5;
  if (uVar7 < uVar4) {
    uVar3 = uVar7;
    do {
      uVar6 = -1 << (ulonglong)(uVar3 & 0x1f);
      uVar5 = uVar3 >> 5;
      uVar3 = (uVar3 & 0xffffffe0) + 0x20;
      puVar1 = (uint *)(param_2 + uVar5 * 4);
      if (uVar4 < uVar3) {
        uVar6 = uVar6 & 0xffffffffU >> (ulonglong)(0x20 - uVar4 & 0x1f);
      }
      *puVar1 = uVar6 | *puVar1;
    } while (uVar3 < uVar4);
  }
  uVar3 = uVar7 + 0x1f >> 5;
  if (uVar3 < uVar4 >> 5) {
    do {
      uVar6 = -1 << (ulonglong)(uVar3 & 0x1f);
      uVar5 = uVar3 >> 5;
      uVar3 = (uVar3 & 0xffffffe0) + 0x20;
      if (uVar4 >> 5 < uVar3) {
        uVar6 = uVar6 & 0xffffffffU >> (ulonglong)(0x20 - (uVar4 >> 5 & 0x1f) & 0x1f);
      }
      *(uint *)(param_3 + uVar5 * 4) = uVar6 | *(uint *)(param_3 + uVar5 * 4);
    } while (uVar3 < uVar4 >> 5);
  }
  uVar3 = (uVar4 >> 5) - 1;
  if ((uVar4 & 0x1f) != 0) {
    uVar3 = uVar4 >> 5;
  }
  uVar5 = 1 << (ulonglong)(uVar7 >> 5 & 0x1f);
  uVar6 = *(uint *)(param_3 + (uVar7 >> 10) * 4);
  uVar4 = uVar5 | uVar6;
  if (*(int *)(param_2 + (uVar7 >> 5) * 4) != -1) {
    uVar4 = uVar6 & (uVar5 ^ 0xffffffff);
  }
  *(uint *)(param_3 + (uVar7 >> 10) * 4) = uVar4;
  uVar5 = 1 << (ulonglong)(uVar3 & 0x1f);
  uVar6 = *(uint *)(param_3 + (uVar3 >> 5) * 4);
  uVar4 = uVar6 | uVar5;
  if (*(int *)(param_2 + uVar3 * 4) != -1) {
    uVar4 = uVar6 & (uVar5 ^ 0xffffffff);
  }
  *(uint *)(param_3 + (uVar3 >> 5) * 4) = uVar4;
  uVar3 = uVar7;
LAB_1007b5d4:
  uVar4 = 0xffffffff;
  goto LAB_1007b340;
}

