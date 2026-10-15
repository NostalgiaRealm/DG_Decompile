/*
 * FUN_1000e9a6 at 1000e9a6
 * undefined __thiscall FUN_1000e9a6(void * this, int * param_1)
 * Address ranges: 1000e9a6-1000eae1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000e9a6(void *this,int *param_1)

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
  
  if (*(int *)((int)this + -0x80) != 0) {
    uVar4 = 0;
    iVar3 = 0;
    do {
      if (param_1[iVar3] != *(int *)(*(int *)((int)this + -0x80) + iVar3 * 4)) {
        if ((*(int *)((int)this + -0x6c) == 0) && (*(char *)((int)this + 0xc9) != '\0')) {
          if ((*(int *)((int)this + 0x6c) == 0) || (*(int *)((int)this + 0x8c) == 0)) {
            FUN_1000d3f5((void *)((int)this + -0x88));
          }
          if (*(int *)((int)this + -100) != 0) {
            do {
              local_20 = 0;
              if (*(int *)((int)this + -0x68) != 0) {
                do {
                  uVar5 = *(int *)((int)this + -0x5c) * uVar4 + local_20;
                  BVar2 = IsRectEmpty((RECT *)(*(int *)((int)this + -0x28) + 0xc + uVar5 * 0x1c));
                  if (BVar2 == 0) {
                    FUN_1000db95((void *)((int)this + -0x88),local_20,uVar4);
                    SetRectEmpty((LPRECT)(*(int *)((int)this + -0x28) + uVar5 * 0x1c + 0xc));
                    yBottom = *(uint *)((int)this + -0x70) >> ((byte)local_20 & 0x1f);
                    xRight = *(uint *)((int)this + -0x74) >> ((byte)local_20 & 0x1f);
                    if (yBottom == 0) {
                      yBottom = 1;
                    }
                    if (xRight == 0) {
                      xRight = 1;
                    }
                    SetRect(&local_18,0,0,xRight,yBottom);
                    FUN_1000e4be((void *)((int)this + -0x88),uVar5,&local_18);
                  }
                  pbVar1 = (byte *)((int)this + ((int)(uVar5 & 0x1f) >> 3) + (uVar5 >> 5) * 4 + 0xe4
                                   );
                  *pbVar1 = *pbVar1 | '\x01' << (uVar5 & 7);
                  local_20 = local_20 + 1;
                } while (local_20 < *(uint *)((int)this + -0x68));
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < *(uint *)((int)this + -100));
          }
        }
        FUN_1000ca75(this,param_1);
        return;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x100);
  }
  return;
}

