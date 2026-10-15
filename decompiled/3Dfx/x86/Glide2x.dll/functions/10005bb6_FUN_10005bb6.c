/*
 * FUN_10005bb6 at 10005bb6
 * undefined1 __fastcall FUN_10005bb6(byte * param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 10005bb6-10005d4d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x10005cfd) */
/* WARNING: Removing unreachable block (ram,0x10005d3f) */
/* WARNING: Removing unreachable block (ram,0x10005d41) */

undefined1 __fastcall FUN_10005bb6(byte *param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uStack_9c;
  char local_9;
  
  bVar1 = FUN_10005a28(param_1,(byte *)"unforced",&DAT_10051385);
  if (bVar1) {
    *param_3 = 0;
    *param_2 = 0;
  }
  else {
    bVar1 = FUN_10005a28(param_1,&DAT_1005275c,(byte *)" max_%ux ");
    if (bVar1) {
      *param_3 = 0xffffffff;
      *param_2 = 0xffffffff;
    }
    else {
      bVar1 = FUN_10005a28(param_1,(byte *)"max_isf",(byte *)" max_isf_%ux ");
      if (bVar1) {
        uStack_9c = 0xfffffffe;
      }
      else {
        bVar1 = FUN_10005a28(param_1,(byte *)"max_fhd",(byte *)" max_fhd_%ux ");
        if (bVar1) {
          uStack_9c = 0xfffffffd;
        }
        else {
          bVar1 = FUN_10005a28(param_1,(byte *)"max_fhd_isf",(byte *)" max_fhd_isf_%ux ");
          if (bVar1) {
            uStack_9c = 0xfffffffc;
          }
          else {
            bVar1 = FUN_10005a28(param_1,(byte *)"max_qhd",(byte *)" max_qhd_%ux ");
            if (bVar1) {
              uStack_9c = 0xfffffffb;
            }
            else {
              bVar1 = FUN_10005a28(param_1,(byte *)"max_qhd_isf",(byte *)" max_qhd_isf_%ux ");
              if (bVar1) {
                uStack_9c = 0xfffffffa;
              }
              else {
                bVar1 = FUN_10005a28(param_1,(byte *)"desktop",(byte *)" desktop_%ux ");
                if (!bVar1) {
                  iVar2 = FUN_10050231(param_1,(byte *)" %u%c%s ");
                  if (iVar2 != 2) {
                    return 0;
                  }
                  if (local_9 != 'x') {
                    return 0;
                  }
                  *param_2 = 0xfffffff9;
                  *param_3 = 0;
                  return 0;
                }
                uStack_9c = 0xfffffff8;
              }
            }
          }
        }
      }
      *param_3 = uStack_9c;
      *param_2 = uStack_9c;
    }
  }
  return 1;
}

