/*
 * FUN_1009e5ad at 1009e5ad
 * bool __thiscall FUN_1009e5ad(void * this, undefined4 * param_1, uint param_2)
 * Address ranges: 1009e5ad-1009e6a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_1009e5ad(void *this,undefined4 *param_1,uint param_2)

{
  char cVar1;
  SIZE_T SVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  bool bVar8;
  
  SVar2 = (SIZE_T)((ulonglong)param_2 * 8);
  if ((int)((ulonglong)param_2 * 8 >> 0x20) != 0) {
    SVar2 = 0xffffffff;
  }
  puVar3 = (undefined4 *)FUN_100cfd89(SVar2);
  if (puVar3 == (undefined4 *)0x0) {
    bVar8 = false;
  }
  else {
    *(undefined4 **)((int)this + 0x26c) = puVar3;
    FUN_100cff00(puVar3,param_1,param_2 << 3);
    *(uint *)((int)this + 0x270) = param_2;
    uVar7 = 1;
    bVar8 = true;
    if (*(int *)((int)this + 0x24) != 1) {
      piVar4 = (int *)FUN_100cfd55(0x254);
      bVar8 = piVar4 != (int *)0x0;
      *(int **)((int)this + 0x268) = piVar4;
      if (piVar4 != (int *)0x0) {
        FUN_10073326((int *)((int)this + 0x14),piVar4);
      }
    }
    if (*(char *)((int)this + 0x27b) == '\0') {
      for (uVar5 = 0; uVar6 = 0, uVar5 < *(uint *)((int)this + 0x1c); uVar5 = uVar5 + 1) {
        if ((*(char *)((int)this + uVar5 + 0x228) == '\0') &&
           ((*(char *)((int)this + 0x2d) == '\0' || (*(char *)((int)this + 0x2d) == -0x70)))) {
          uVar6 = 1;
          break;
        }
      }
      *(undefined1 *)((int)this + 0x278) = uVar6;
      uVar5 = 0;
      if (*(int *)((int)this + 0x1c) != 0) {
        do {
          cVar1 = *(char *)((int)this + (uint)*(byte *)((int)this + uVar5 + 0x228) * 8 + 0x2c);
          if ((((cVar1 != '\0') && (cVar1 != '\x01')) && (cVar1 != '\x02')) &&
             ((cVar1 != '\x03' && (cVar1 != '\x04')))) {
            uVar7 = 0;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)((int)this + 0x1c));
      }
    }
    else {
      *(undefined1 *)((int)this + 0x278) = 1;
    }
    *(undefined1 *)((int)this + 0x279) = uVar7;
  }
  return bVar8;
}

