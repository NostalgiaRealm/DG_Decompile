/*
 * FUN_100ed800 at 100ed800
 * undefined FUN_100ed800(void)
 * Address ranges: 100ed800-100eda53
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100ed800(int param_1,undefined4 param_2)

{
  int *piVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uStack_300;
  undefined1 auStack_278 [4];
  int local_274;
  uint local_270;
  byte abStack_261 [509];
  byte abStack_64 [68];
  
  uVar10 = 0;
  uVar11 = 0;
  uVar6 = FUN_100a2df0(param_2,1,auStack_278);
  if ((uVar6 & 1) != 0) {
    if ((local_274 == 0) || (bVar3 = false, local_274 == 3)) {
      bVar3 = true;
    }
    if (local_270 != 0) {
      iVar5 = *(int *)(&DAT_00006704 + *(int *)(param_1 + 0xc));
      do {
        bVar2 = abStack_64[uVar10];
        *(undefined2 *)(&uStack_300 + uVar10) = 0;
        *(undefined1 *)((int)&uStack_300 + uVar10 * 8 + 5) = 0;
        switch(abStack_261[(uint)bVar2 * 8 + 1]) {
        case 0:
          cVar4 = '\0';
          break;
        case 1:
          cVar4 = '\x01';
          break;
        case 2:
          cVar4 = '\x02';
          break;
        case 3:
          cVar4 = '\x03';
          break;
        case 4:
          cVar4 = '\x04';
          break;
        case 5:
          cVar4 = '\x05';
          break;
        default:
          cVar4 = '\x11';
        }
        *(char *)((int)&uStack_300 + uVar10 * 8 + 4) = cVar4;
        *(ushort *)((int)&uStack_300 + uVar10 * 8 + 2) = (ushort)abStack_261[(uint)bVar2 * 8] << 2;
        switch(bVar2) {
        case 0:
        case 0xf:
          uVar7 = 9;
          if (!bVar3) {
            uVar7 = 0;
          }
          break;
        case 1:
          uVar7 = 1;
          break;
        case 2:
          uVar7 = 2;
          break;
        case 3:
        case 0x10:
          uVar7 = 3;
          break;
        case 4:
          uVar7 = 4;
          break;
        case 5:
        case 6:
          uVar7 = 10;
          break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
          uVar7 = 5;
          break;
        default:
          uVar7 = 0;
        }
        *(undefined1 *)((int)&uStack_300 + uVar10 * 8 + 6) = uVar7;
        switch((uint)bVar2) {
        default:
          cVar8 = '\0';
          break;
        case 6:
        case 0xf:
        case 0x10:
          cVar8 = '\x01';
          break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
          cVar8 = bVar2 - 7;
        }
        *(char *)((int)&uStack_300 + uVar10 * 8 + 7) = cVar8;
        if ((cVar4 == '\x05') && ((*(uint *)(iVar5 + 0xec) & 1) == 0)) {
          uVar9 = 1;
        }
        else {
          uVar9 = 0;
        }
        uVar10 = uVar10 + 1;
        uVar11 = uVar9 | uVar11;
      } while (uVar10 < local_270);
    }
  }
  (&uStack_300)[uVar10] = 0x11000000ff;
  iVar5 = FUN_100cfc90(*(undefined4 *)(param_1 + 0xc),auStack_278,param_2,uVar11,1);
  if (iVar5 != 0) {
    FUN_100eb6a8(iVar5,&uStack_300,uVar10 + 1);
    piVar1 = (int *)(iVar5 + 8);
    do {
      cVar4 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(ZEXT48(piVar1),0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    DataMemoryBarrier(2,3);
  }
  return iVar5;
}

