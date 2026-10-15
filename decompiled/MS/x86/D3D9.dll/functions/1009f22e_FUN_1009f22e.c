/*
 * FUN_1009f22e at 1009f22e
 * undefined4 * __thiscall FUN_1009f22e(void * this, uint param_1)
 * Address ranges: 1009f22e-1009f3f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_1009f22e(void *this,uint param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  undefined4 *this_00;
  char cVar9;
  byte bVar10;
  uint uVar11;
  uint local_2f8;
  int local_2f4;
  uint local_2f0;
  byte abStack_2e1 [509];
  byte abStack_e4 [68];
  undefined4 local_a0;
  char acStack_9c [136];
  uint local_14;
  undefined4 local_10;
  void *local_c;
  
  bVar10 = 0;
  uVar11 = 0;
  local_14 = local_14 & 0xffffff00;
  local_c = this;
  uVar8 = FUN_10072f77(param_1,'\x01',&local_2f8);
  if ((char)uVar8 != '\0') {
    iVar3 = *(int *)(&DAT_00006704 + *(int *)((int)this + 0xc));
    if ((local_2f4 == 0) || (local_2f4 == 3)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (local_2f0 != 0) {
      do {
        bVar7 = abStack_e4[uVar11];
        uVar8 = (uint)bVar7;
        *(undefined2 *)(&local_a0 + uVar11 * 2) = 0;
        acStack_9c[uVar11 * 8 + 1] = '\0';
        bVar6 = abStack_2e1[uVar8 * 8 + 1];
        if (bVar6 == 0) {
          cVar9 = '\0';
        }
        else if (bVar6 == 1) {
          cVar9 = '\x01';
        }
        else if (bVar6 == 2) {
          cVar9 = '\x02';
        }
        else if (bVar6 == 3) {
          cVar9 = '\x03';
        }
        else if (bVar6 == 4) {
          cVar9 = '\x04';
        }
        else if (bVar6 == 5) {
          cVar9 = '\x05';
        }
        else {
          cVar9 = '\x11';
        }
        acStack_9c[uVar11 * 8] = cVar9;
        *(ushort *)(acStack_9c + uVar11 * 8 + -2) = (ushort)abStack_2e1[uVar8 * 8] << 2;
        switch(uVar8) {
        case 0:
        case 0xf:
          bVar6 = !bVar5 - 1U & 9;
          break;
        case 1:
          bVar6 = 1;
          break;
        case 2:
          bVar6 = 2;
          break;
        case 3:
        case 0x10:
          bVar6 = 3;
          break;
        case 4:
          bVar6 = 4;
          break;
        case 5:
        case 6:
          bVar6 = 10;
          break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
          bVar6 = 5;
          break;
        default:
          bVar6 = 0;
        }
        acStack_9c[uVar11 * 8 + 2] = bVar6;
        switch(uVar8) {
        default:
          cVar9 = '\0';
          break;
        case 6:
        case 0xf:
        case 0x10:
          cVar9 = '\x01';
          break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
          cVar9 = bVar7 - 7;
        }
        cVar2 = acStack_9c[uVar11 * 8];
        acStack_9c[uVar11 * 8 + 3] = cVar9;
        if ((cVar2 == '\x05') && ((*(byte *)(iVar3 + 0xec) & 1) == 0)) {
          bVar7 = 1;
        }
        else {
          bVar7 = 0;
        }
        bVar10 = bVar10 | bVar7;
        uVar11 = uVar11 + 1;
      } while (uVar11 < local_2f0);
      local_14 = CONCAT31(local_14._1_3_,bVar10);
      this = local_c;
    }
  }
  uVar8 = local_14;
  local_c = (void *)0x11;
  local_10 = 0xff;
  pcVar1 = acStack_9c + uVar11 * 8;
  pcVar1[0] = '\x11';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  uVar4 = *(undefined4 *)((int)this + 0xc);
  (&local_a0)[uVar11 * 2] = 0xff;
  this_00 = FUN_1008fb53(uVar4,&local_2f8,param_1,(char)uVar8,1);
  if (this_00 != (undefined4 *)0x0) {
    FUN_1009e5ad(this_00,&local_a0,uVar11 + 1);
    LOCK();
    this_00[2] = this_00[2] + 1;
    UNLOCK();
  }
  return this_00;
}

