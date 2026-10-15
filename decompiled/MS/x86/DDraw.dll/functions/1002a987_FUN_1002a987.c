/*
 * FUN_1002a987 at 1002a987
 * undefined4 __thiscall FUN_1002a987(void * this, void * param_1, uint param_2)
 * Address ranges: 1002a987-1002ab5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_1002a987(void *this,void *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  undefined1 local_5;
  
  FUN_10023df9(&local_5);
  uVar7 = 0x80070057;
  uVar5 = param_2 & 0x7000000;
  if ((((byte)param_2 & 0x21) != 0x21 && (param_2 & 0xf8ffffc0) == 0) &&
     (((((uVar5 == 0x2000000 || (uVar5 == 0x3000000)) || (uVar5 == 0x4000000)) &&
       ((param_2 >> 3 & 1) == 0)) || (uVar5 == 0)))) {
    uVar6 = 1;
    uVar7 = 0x80004001;
    uVar4 = uVar6;
    if (uVar5 != 0) {
      uVar4 = uVar5 >> 0x18;
    }
    if ((param_2 >> 3 & 1) != 0) {
      uVar4 = 0;
    }
    if ((param_2 & 6) == 0) {
      pvVar3 = *(void **)((int)this + 0x110);
      if (param_1 != (void *)0x0) {
        uVar6 = 0;
        pvVar3 = this;
        do {
          if (param_1 == pvVar3) break;
          pvVar3 = *(void **)((int)pvVar3 + 0x110);
          uVar6 = uVar6 + 1;
        } while (pvVar3 != (void *)0x0);
      }
      uVar7 = 0x88760246;
      if ((((*(uint *)((int)this + 0x1b8) & 0x20) != 0) && (pvVar3 != (void *)0x0)) &&
         ((uVar7 = 0x887600e1, (*(uint *)((int)this + 0x1b8) & 0x8000) == 0 ||
          ((*(uint *)(*(int *)((int)this + 0xfc) + 0x104) >> 4 & 1) != 0)))) {
        if ((*(char *)((int)this + 8) != '\0') &&
           (FUN_10033038((int)this), *(char *)((int)this + 8) != '\0')) {
          uVar5 = *(uint *)((int)this + 0x168);
          if (*(uint *)((int)this + 0x168) == 0) {
            uVar5 = 0x3c;
          }
          Sleep((DWORD)(1000 / (ulonglong)uVar5));
        }
        uVar7 = 0x887601c2;
        if (*(char *)((int)this + 8) == '\0') {
          uVar7 = 0x887601ae;
          bVar8 = false;
          pvVar3 = this;
          do {
            if (bVar8) goto LAB_1002ab4a;
            piVar1 = (int *)((int)pvVar3 + 4);
            pvVar3 = *(void **)((int)pvVar3 + 0x110);
            iVar2 = *(int *)(*piVar1 + 0xb0);
            bVar8 = iVar2 != 0;
          } while (pvVar3 != (void *)0x0);
          if (iVar2 == 0) {
            uVar7 = FUN_1002a663(this,uVar6,uVar4);
          }
        }
      }
    }
  }
LAB_1002ab4a:
  FUN_10023e27();
  return uVar7;
}

