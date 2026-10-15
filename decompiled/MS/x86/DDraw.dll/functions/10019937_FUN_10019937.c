/*
 * FUN_10019937 at 10019937
 * undefined __thiscall FUN_10019937(void * this, undefined4 * param_1)
 * Address ranges: 10019937-10019a63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10019937(void *this,undefined4 *param_1)

{
  byte *pbVar1;
  BOOL BVar2;
  uint yBottom;
  int iVar3;
  uint xRight;
  uint uVar4;
  uint uVar5;
  uint local_20;
  tagRECT local_18;
  
  uVar4 = 0;
  iVar3 = 0;
  do {
    if (param_1[iVar3] != *(int *)(*(int *)((int)this + 8) + iVar3 * 4)) {
      if ((*(int *)((int)this + 0x1c) == 0) && (*(char *)((int)this + 0x1bd) != '\0')) {
        if ((*(int *)((int)this + 0x148) == 0) || (*(int *)((int)this + 0x184) == 0)) {
          FUN_100190c2(this);
        }
        if (*(int *)((int)this + 0x24) != 0) {
          do {
            local_20 = 0;
            if (*(int *)((int)this + 0x20) != 0) {
              do {
                uVar5 = *(int *)((int)this + 0x2c) * uVar4 + local_20;
                BVar2 = IsRectEmpty((RECT *)(*(int *)((int)this + 0x5c) + 0x10 + uVar5 * 0x20));
                if (BVar2 == 0) {
                  FUN_10019e3b(this,local_20,uVar4);
                  SetRectEmpty((LPRECT)(*(int *)((int)this + 0x5c) + uVar5 * 0x20 + 0x10));
                  yBottom = *(uint *)((int)this + 0x18) >> ((byte)local_20 & 0x1f);
                  xRight = *(uint *)((int)this + 0x14) >> ((byte)local_20 & 0x1f);
                  if (yBottom == 0) {
                    yBottom = 1;
                  }
                  if (xRight == 0) {
                    xRight = 1;
                  }
                  SetRect(&local_18,0,0,xRight,yBottom);
                  FUN_1001a87e(this,uVar5,&local_18);
                }
                pbVar1 = (byte *)((int)this + ((int)(uVar5 & 0x1f) >> 3) + (uVar5 >> 5) * 4 + 0x1d8)
                ;
                *pbVar1 = *pbVar1 | '\x01' << (uVar5 & 7);
                local_20 = local_20 + 1;
              } while (local_20 < *(uint *)((int)this + 0x20));
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)((int)this + 0x24));
        }
      }
      FUN_10017760(this,param_1);
      return;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x100);
  return;
}

