/*
 * FUN_1002c386 at 1002c386
 * char __thiscall FUN_1002c386(void * this, LPRECT param_1)
 * Address ranges: 1002c386-1002c511
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char __thiscall FUN_1002c386(void *this,LPRECT param_1)

{
  int *piVar1;
  uint uVar2;
  BOOL BVar3;
  int iVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  RECT *local_8;
  
  local_8 = (RECT *)0x0;
  cVar5 = *(char *)((int)this + 0x42);
  do {
    if (cVar5 != '\0') {
      return '\0';
    }
    iVar4 = *(int *)((int)this + 0x30);
    cVar5 = '\0';
    uVar2 = *(uint *)((int)this + 0x34);
    if (iVar4 == 0) {
      if (uVar2 == 0) {
        local_8 = (RECT *)((int)this + 0x10);
        goto LAB_1002c3c4;
      }
    }
    else if (uVar2 < *(uint *)(iVar4 + 8)) {
      local_8 = (RECT *)((uVar2 + 2) * 0x10 + iVar4);
LAB_1002c3c4:
      cVar5 = '\x01';
    }
    *(uint *)((int)this + 0x34) = uVar2 + 1;
    if (cVar5 == '\0') {
      return '\0';
    }
    BVar3 = IntersectRect(param_1,local_8,(RECT *)((int)this + 0x20));
    if (BVar3 != 0) {
      piVar1 = (int *)((int)this + 0x10);
      iVar4 = *(int *)((int)this + 8) - *(int *)this;
      fVar6 = (float)(*(int *)((int)this + 0x18) - *piVar1);
      fVar8 = (float)*(int *)this;
      fVar7 = (float)((param_1->left - *piVar1) * iVar4) / fVar6 + fVar8;
      fVar6 = (float)((param_1->right - *piVar1) * iVar4) / fVar6 + fVar8;
      if (*(char *)((int)this + 0x40) == '\0') {
        param_1[1].left = (LONG)fVar7;
      }
      else {
        param_1[1].left = (LONG)(((float)*(int *)((int)this + 8) - fVar7) + fVar8);
        fVar6 = (float)(*(int *)((int)this + 8) + *(int *)this) - fVar6;
      }
      param_1[1].right = (LONG)fVar6;
      iVar4 = *(int *)((int)this + 0xc) - *(int *)((int)this + 4);
      fVar6 = (float)(*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x14));
      fVar8 = (float)*(int *)((int)this + 4);
      fVar7 = (float)((param_1->top - *(int *)((int)this + 0x14)) * iVar4) / fVar6 + fVar8;
      fVar6 = (float)((param_1->bottom - *(int *)((int)this + 0x14)) * iVar4) / fVar6 + fVar8;
      if (*(char *)((int)this + 0x41) == '\0') {
        param_1[1].top = (LONG)fVar7;
      }
      else {
        param_1[1].top = (LONG)(((float)*(int *)((int)this + 0xc) - fVar7) + fVar8);
        fVar6 = (float)(*(int *)((int)this + 0xc) + *(int *)((int)this + 4)) - fVar6;
      }
      param_1[1].bottom = (LONG)fVar6;
      OffsetRect(param_1,*(int *)((int)this + 0x38),*(int *)((int)this + 0x3c));
      return cVar5;
    }
    cVar5 = *(char *)((int)this + 0x42);
  } while( true );
}

