FROM gcc:latest
WORKDIR D:/invatam/MAP/proiect-sincretic
COPY proiect-sincretic.cpp .
RUN gcc -o proiect-sincretic proiect-sincretic.cpp -lstdc++
CMD ["./proiect-sincretic"]