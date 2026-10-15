/*
 * FUN_100926d4 at 100926d4
 * undefined1 __thiscall FUN_100926d4(void * this, uint param_1)
 * Address ranges: 100926d4-100929bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_100926d4(void *this,uint param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  uint local_8;
  
  if ((*(char *)((int)this + 0xc2ed) == '\0') && (param_1 == *(uint *)((int)this + 0xc2e4))) {
    return *(undefined1 *)((int)this + 0xc2e8);
  }
  iVar5 = *(int *)((int)this + 0x18);
  bVar6 = 1;
  uVar4 = (uint)CONCAT11(*(byte *)(*(int *)(iVar5 + 4) + 0xb8) & 1,1);
  if ((param_1 & 1) != 0) {
    local_8 = 1;
    do {
      if (3 < local_8) break;
      iVar1 = *(int *)((int)this + local_8 * 4 + 0x18);
      if (iVar1 != 0) {
        if ((((*(int *)(iVar1 + 0x40) != *(int *)(iVar5 + 0x40)) ||
             (*(int *)(iVar1 + 0x44) != *(int *)(iVar5 + 0x44))) ||
            (*(int *)(iVar1 + 0x38) != *(int *)(iVar5 + 0x38))) ||
           (*(int *)(iVar1 + 0x3c) != *(int *)(iVar5 + 0x3c))) {
          uVar4 = uVar4 & 0xffffff00;
        }
        if ((byte)(uVar4 >> 8) != (*(byte *)(*(int *)(iVar1 + 4) + 0xb8) & 1)) {
          uVar4 = uVar4 & 0xffffff00;
          break;
        }
      }
      local_8 = local_8 + 1;
    } while ((char)uVar4 != '\0');
  }
  if (param_1 == 3) {
    if ((char)uVar4 == '\0') goto LAB_100929a1;
    iVar1 = *(int *)((int)this + 0x28);
    if (iVar1 != 0) {
      if ((*(uint *)(iVar1 + 0x40) < *(uint *)(iVar5 + 0x40)) ||
         (*(uint *)(iVar1 + 0x44) < *(uint *)(iVar5 + 0x44))) {
        uVar4 = uVar4 & 0xffffff00;
      }
      else if (((*(uint *)(iVar5 + 0x40) <
                 (uint)(*(int *)((int)this + 0x34) + *(int *)((int)this + 0x2c))) ||
               (*(uint *)(iVar5 + 0x44) <
                (uint)(*(int *)((int)this + 0x38) + *(int *)((int)this + 0x30)))) &&
              ((*(uint *)(iVar5 + 0x40) < 3 && (*(uint *)(iVar5 + 0x44) < 3)))) {
        param_1 = 2;
      }
      if ((byte)(uVar4 >> 8) != (*(byte *)(*(int *)(iVar1 + 4) + 0xb8) & 1)) {
        uVar4 = 0;
        goto LAB_100929a1;
      }
      goto LAB_100927ce;
    }
  }
  else {
LAB_100927ce:
    if ((char)uVar4 == '\0') goto LAB_100929a1;
  }
  if (param_1 == 1) {
    uVar4 = FUN_100180a8(this,(int *)((int)this + 0x18),(int *)0x0,'\0');
    uVar4 = uVar4 & 0xff;
    iVar5 = *(int *)((int)this + 0x18);
    iVar1 = *(int *)((int)this + 0x1c);
    iVar3 = *(int *)((int)this + 0x20);
    *(undefined4 *)((int)this + 0xc27c) = *(undefined4 *)((int)this + 0x24);
    *(int *)((int)this + 0xc270) = iVar5;
    *(int *)((int)this + 0xc274) = iVar1;
    *(int *)((int)this + 0xc278) = iVar3;
    *(undefined4 *)((int)this + 0xc280) = 0;
    bVar6 = 1;
    if (((*(int *)(iVar5 + 0x88) == 0) && ((iVar1 == 0 || (*(int *)(iVar1 + 0x88) == 0)))) &&
       ((iVar3 == 0 || (*(int *)(iVar3 + 0x88) == 0)))) {
      iVar5 = *(int *)((int)this + 0x24);
      goto LAB_1009298c;
    }
  }
  else {
    if ((param_1 == 2) &&
       ((((piVar2 = *(int **)((int)this + 0x28),
          *(uint *)(iVar5 + 0x40) < (uint)(*(int *)((int)this + 0x34) + *(int *)((int)this + 0x2c))
          || (*(uint *)(iVar5 + 0x44) <
              (uint)(*(int *)((int)this + 0x38) + *(int *)((int)this + 0x30)))) ||
         (piVar2[0xe] != *(int *)(iVar5 + 0x38))) || (piVar2[0xf] != *(int *)(iVar5 + 0x3c))))) {
      uVar4 = FUN_100180a8(this,(int *)((int)this + 0x18),piVar2,'\x01');
      uVar4 = uVar4 & 0xff;
      *(undefined4 *)((int)this + 0xc270) = 0;
      *(undefined4 *)((int)this + 0xc274) = 0;
      *(undefined4 *)((int)this + 0xc278) = 0;
      *(undefined4 *)((int)this + 0xc27c) = 0;
      iVar5 = *(int *)((int)this + 0x28);
      *(int *)((int)this + 0xc280) = iVar5;
      if ((*(int *)(*(int *)(iVar5 + 4) + 0x60) != -1) && (*(int *)(iVar5 + 0x88) != 0)) {
        *(undefined1 *)(*(int *)(iVar5 + 0x88) + 0x32) = 1;
      }
    }
    else {
      uVar4 = FUN_100180a8(this,(int *)((int)this + 0x18),*(int **)((int)this + 0x28),'\0');
      uVar4 = uVar4 & 0xff;
      *(int *)((int)this + 0xc270) = *(int *)((int)this + 0x18);
      *(undefined4 *)((int)this + 0xc278) = *(undefined4 *)((int)this + 0x20);
      *(undefined4 *)((int)this + 0xc274) = *(undefined4 *)((int)this + 0x1c);
      *(undefined4 *)((int)this + 0xc27c) = *(undefined4 *)((int)this + 0x24);
      iVar5 = *(int *)((int)this + 0x28);
      *(int *)((int)this + 0xc280) = iVar5;
      if (((iVar5 != 0) && (*(int *)(*(int *)(iVar5 + 4) + 0x60) != -1)) &&
         (*(int *)(iVar5 + 0x88) != 0)) {
        *(undefined1 *)(*(int *)(iVar5 + 0x88) + 0x32) = 1;
      }
      if (((*(int *)(*(int *)((int)this + 0xc270) + 0x88) != 0) ||
          ((*(int *)((int)this + 0xc274) != 0 &&
           (*(int *)(*(int *)((int)this + 0xc274) + 0x88) != 0)))) ||
         (((*(int *)((int)this + 0xc278) != 0 &&
           (*(int *)(*(int *)((int)this + 0xc278) + 0x88) != 0)) ||
          ((*(int *)((int)this + 0xc27c) != 0 &&
           (*(int *)(*(int *)((int)this + 0xc27c) + 0x88) != 0)))))) goto LAB_1009299b;
    }
    iVar5 = *(int *)((int)this + 0xc280);
LAB_1009298c:
    bVar6 = 1;
    if ((iVar5 == 0) || (*(int *)(iVar5 + 0x88) == 0)) {
      bVar6 = 0;
    }
  }
LAB_1009299b:
  *(byte *)((int)this + 0xcc4) = *(byte *)((int)this + 0xcc4) | bVar6;
LAB_100929a1:
  *(char *)((int)this + 0xc2e8) = (char)uVar4;
  *(uint *)((int)this + 0xc2e4) = param_1;
  *(undefined1 *)((int)this + 0xc2ed) = 0;
  return (char)uVar4;
}

