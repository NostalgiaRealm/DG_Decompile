/*
 * FUN_1001081d at 1001081d
 * undefined __thiscall FUN_1001081d(void * this, int param_1)
 * Address ranges: 1001081d-100108fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001081d(void *this,int param_1)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar4 = 0;
  if (*(int *)((int)this + 0x6670) == 0) {
    FUN_1001abe8(this,param_1);
  }
  else {
    pcVar1 = *(char **)(*(int *)((int)this + 0x6670) + 4);
    if ((byte)pcVar1[0x126d] < 3) {
      uVar5 = 0;
      uVar6 = 2;
      if (*pcVar1 == '\0') {
        uVar6 = 0;
      }
      uVar4 = uVar6 | 4;
      if (pcVar1[1] == '\0') {
        uVar4 = uVar6;
      }
      do {
        if (pcVar1[uVar5 + 0x2a] != '\0') {
          uVar4 = uVar4 | 8 << ((byte)uVar5 & 0x1f);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 8);
    }
    else if (pcVar1[0x147] == '\0') {
      uVar6 = 0;
      do {
        if (pcVar1[uVar6] != 0) {
          uVar5 = 0;
          do {
            if (((uint)(byte)pcVar1[uVar6] & 1 << ((byte)uVar5 & 0x1f)) != 0) {
              uVar2 = *(uint *)(pcVar1 + uVar6 * 4 + 0x118) >> ((byte)(uVar5 << 3) & 0x1f);
              bVar3 = (byte)uVar2 >> 4;
              if (bVar3 == 5) {
                if ((uVar2 & 8) == 0) {
                  iVar7 = 8;
LAB_1001089e:
                  uVar4 = uVar4 | iVar7 << ((byte)uVar2 & 0xf);
                }
              }
              else if ((bVar3 == 10) && ((uVar2 & 0xe) == 0)) {
                iVar7 = 2;
                goto LAB_1001089e;
              }
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < 4);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 10);
    }
    else {
      uVar4 = 0x7fe;
    }
    FUN_1001aacc(this,param_1,uVar4);
  }
  return;
}

